#include <iostream>
#include <cstring>
#include "plorg.h"

Plorg::Plorg(const char* name,int CI)
{
    strcpy(name_, name); 
    CI_=CI;
}
 
void Plorg::show()
{
    std::cout << "The plorg name is " << name_ << ", and the CI is " << CI_ << std::endl;
}
 
void Plorg::setname(const char * name)
{
    strcpy(name_, name);
}
 
void Plorg::setCI(int CI)
{
    CI_ = CI;

}