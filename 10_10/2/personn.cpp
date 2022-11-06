#include <iostream>
#include "person.h"

int main()
{
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");
    std::cout << "one: ";
    one.Show();
    one.FormalShow();
    std::cout << "two: ";
    two.Show();
    two.FormalShow();
    std::cout << "three: ";
    three.Show();
    three.FormalShow();
    return 0;
}