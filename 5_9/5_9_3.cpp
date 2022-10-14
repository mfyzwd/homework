#include<iostream>

int main(){

     int a=0,sum=0;
     std::cout<<"请输入一个整数："<<std::endl;
     std::cin>>a;
     while(a!=0){
        sum+=a;
        std::cin>>a;
        std::cout<<"到目前为止的和为："<<sum<<std::endl;
     }
     return 0;


}