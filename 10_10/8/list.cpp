#include <iostream>
#include "list.h"
 
List::List()
{
    top = 0;
}
 
bool List::isempty() const
{
    return top == 0;
}
 
bool List::isfull() const
{
    return top == MAX;
}
 
bool List::add(const Item & item)
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}
 void List::show(){
    for (int i = 0; i < top; i++)
    {
        std::cout<< i+1 << ": " << items[i] << std::endl;
    }
 }