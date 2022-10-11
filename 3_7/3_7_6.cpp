#include <iostream>

int main (){
    float mileage=0.0,gasoline=0.0;
    std::cout<<"Enter your mileage: ";
    std::cin>>mileage;
    std::cout<<"Enter your gasoline: ";
    std::cin>>gasoline;
    std::cout<<"汽车耗油量为一加仑的里程"<<(mileage*1.0)/gasoline<<std::endl;
    return 0;

}