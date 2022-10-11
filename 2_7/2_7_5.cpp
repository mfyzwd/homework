#include <iostream>

double T(double);

int main(){

    double Fahrenheit=0.0 , degree=0.0; //Fahrenheit 华氏 degree 摄氏
    std::cout<<"Please enter a Celsius value:";
    std::cin>>degree;
    std::cout<<std::endl;
    Fahrenheit=T(degree);
    std::cout<<degree<<"degrees Celsius is "<<Fahrenheit;
    std::cout<<" degrees Fahrenheit"<<std::endl;
    return 0;

}

double T(double degree){
    return 1.8*degree+32.0;
}