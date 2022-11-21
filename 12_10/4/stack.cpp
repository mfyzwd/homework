#include "stack.h"
#include <iostream>

Stack::Stack(int n){
    pitems = new Item[n];
    size=n;
    top=0;

}
Stack::Stack(const Stack &s){
    pitems=new Item[s.size];//由于不确定Item是什么呢类型，使用循环来进行赋值
    for(int i=0;i<s.size;i++)
        pitems[i]=s.pitems[i];
        size=s.size;
        top=s.top;
}
Stack::~Stack(){
    delete []pitems;
}
bool Stack::isempty() const{
        return top==0;
}
bool Stack::isfull() const{
        return top ==size;
}
bool Stack::push(Item &item){
    if(top<size){
        pitems[top++]=item;
        return true;
    }
    else
        return false;
}
bool Stack::pop(Item &item){
    if (top>0){
        item=pitems[--top];
        return true;
    }
    else
        return false;
}
Stack &Stack::operator=(const Stack &s){
    if(this==&s)
        return *this;//检查自我赋值的情况
    delete []pitems;   //释放成员指针以前指向的内存
    pitems=new Item[s.size];    
    for(int i=0;i<s.size;i++)
        pitems[i]=s.pitems[i];  //赋值数据
    size=s.size;
    top=s.top;
    return *this;
}