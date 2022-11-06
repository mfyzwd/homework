#include<iostream>
#include"move.h"

int main(){
    Move m1(12.1,10.1);
    Move m2(11.1,9.1);
    std::cout<<"m1"<<std::endl;
    m1.showmove();
    std::cout<<"m2"<<std::endl;
    m2.showmove();
    Move m3;
    m3=m2.add(m1);
    std::cout<<"m1+m2"<<std::endl;
    m3.showmove();

    m1.reset(6.6,5.5);
    std::cout<<"m1 reset :"<<std::endl;
    m1.showmove();
    return 0;
}