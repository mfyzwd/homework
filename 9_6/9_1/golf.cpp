#include <iostream>
#include <string>
#include <cstring>
#include "golf.h"

 
void setgolf(golf & g, const char * name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}
 
int setgolf(golf & g)
{
    using namespace std;
    cout << "Enter the full name of golf player: ";
    cin.getline(g.fullname, Len);
    if(g.fullname==" ")
        return 0;
    cout << "Enter the hanicap of golf player: ";
    cin >> g.handicap;
    cout<<endl;
    cin.get();
    return 1;
}
 
void handicap(golf & g, int hc)
{
    g.handicap = hc;
}
 
void showgolf(const golf & g)
{
    std::cout << "Name: " << g.fullname <<std::endl;
    std::cout << "Handicap: " << g.handicap << std::endl;
}