#include <iostream>
int main(){
    long long int population=0,US=0;
    std::cout<<"Enter the world's population: ";
    std::cin>>population;
    std::cout<<"Enter the population of the US: ";
    std::cin>>US;
    std::cout<<"The population of the US is "<<(US*1.0)/population*100<<"% "<<"of the world population."<<std::endl;
    return 0;

}