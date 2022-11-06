#include <iostream>
#include "plorg.h"
  
int main()
{
    Plorg p;
    std::cout << "The default plorg is: "<<std::endl;
    p.show();
    p.setname("xiao");
    std::cout<<"new name"<<std::endl;
    p.show();
    p.setCI(1);
    std::cout<<"new CI:"<<std::endl;
    p.show();
    return 0;
}