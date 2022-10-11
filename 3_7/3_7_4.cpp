#include <iostream>

int main(){

    long int seconds=0;
    const int a=60,b=24;
    std::cout<<"Enter the number of seconds:";
    std::cin>>seconds;
    std::cout<<seconds<<" seconds = "<<seconds/a/a/b<<" days, "<<seconds%(a*a*b)/(a*a)<<" hours, ";
    std::cout<<seconds%(a*a*b)%(a*a)/a<<" minutes, "<<seconds%(a*a*b)%(a*a)%a<<" seconds"<<std::endl;
    return 0;


}