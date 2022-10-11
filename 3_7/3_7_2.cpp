#include <iostream>
#include <math.h>
int main(){

    float inch=0.0,feet=0.0,weight=0.0;
    const int a=12;
    const float b=0.0254;
    const float c=2.2;
    std::cout<<"您的身高为几英尺：";
    std::cin>>inch;
    std::cout<<"几英寸";
    std::cin>>feet;
    std::cout<<"您的体重为多少磅：";
    std::cin>>weight;
    std::cout<<"BIM为:"<<weight/c/pow((inch*a+feet)*b,2)<<std::endl;
    return 0;

}