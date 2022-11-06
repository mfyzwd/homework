#include <iostream>
#include <string>
#include <cstring>
#include "golf.h"

 
Golf::Golf(const char * name, int hc)
{
    strcpy(full_name, name);
    handicap_ = hc;
}
 
Golf::Golf()
{
    using namespace std;
    char fullname[20];
    int handicap;
    cout << "Enter the full name of golf player: ";
    cin.getline(fullname, 20);
    cout << "Enter the hanicap of golf player: ";
    cin >> handicap;
    cout<<endl;
    cin.get();
    *this=Golf(fullname,handicap);
}
 
void Golf::handicap(int hc)
{
    handicap_ = hc;
}
 
void Golf::showgolf()
{
    std::cout << "Name: " << full_name <<std::endl;
    std::cout << "Handicap: " << handicap_ << std::endl;
}