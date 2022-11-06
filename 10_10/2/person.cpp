#include <iostream>
#include "person.h"
#include <cstring>
 
Person::Person(const std::string & ln, const char * fn)
{
    lname = ln;
    strcpy(fname, fn);
}
void Person::Show() const
{
    std::cout << "The name is " << fname << " " << lname << std::endl;
}
void Person::FormalShow() const
{
    std::cout << "The name is " << lname << "," << fname << std::endl;
}