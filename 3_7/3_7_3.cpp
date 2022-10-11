#include <iostream>

int main(){


    int degrees=0,minutes=0,seconds=0;
    const float a=60.0;
    std::cout<<"Enter a latitude in degrees,minutes,and seconds:"<<std::endl;
    std::cout<<"First,enter the degrees:";
    std::cin>>degrees;
    std::cout<<"Next,enter the minutes of arc:";
    std::cin>>minutes;
    std::cout<<"Finally, enter the seconds of arc:";
    std::cin>>seconds;
    std::cout<<degrees<<" degrees,"<<minutes<<" minutes,"<<seconds<<" seconds = "<<float(degrees+minutes/a+seconds/a/a)<<" degrees"<<std::endl;

    return 0;


}