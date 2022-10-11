#include <iostream>


void fun();
void Fun();

int main(){
    
    fun();
    fun();
    Fun();
    Fun();

    return 0;
}
void fun(){
    std::cout<<"Three blind mice"<<std::endl;
}
void Fun(){
    std::cout<<"see how they run"<<std::endl;
}