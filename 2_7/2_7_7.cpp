#include <iostream>

void Time(int hours,int minutes);
int main(){
    int hours,minutes;
    std::cout<<"Enter the number of hours:";
    std::cin>>hours;
    std::cout<<std::endl;
    std::cout<<"Enter the number of minutes:";
    std::cin>>minutes;
    std::cout<<std::endl;
    Time(hours,minutes);
}
void Time(int hours,int minutes){
    std::cout<<"Time:"<<hours<<":"<<minutes<<std::endl;
}