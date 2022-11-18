#include<iostream>
#include "cow.h"

int main(){
    
    Cow c1;
    Cow c2("name1","asdfg",123);
    Cow c3(c2);//才c2内容通过赋值构造函数，传递给c3
    c1=c2; //重载赋值运算符

    c1.ShowCow();
    c2.ShowCow();
    c3.ShowCow();
    return 0;
}