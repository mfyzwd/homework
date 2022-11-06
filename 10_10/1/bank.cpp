#include <iostream>
#include "bank.h"
 
Bank::Bank(const std::string & name, const std::string & id, double money)
{
    name_ = name;
    id_ = id;
    money_ = money;
}
 
void Bank::show()
{
    using std::cout;
    using std::endl;
    cout<< "The name of bank account is " << name_ << ", the account number is " << id_ << ", now it has money $" << money_ <<endl;
}
 
void Bank::deposit(double money)
{
    using std::cout;
    if (money > 0)
    {
        money_ += money;
        cout << "$" << money << "money : "<<std::endl;
 
    }
    else
    {
        cout << "Input fail.\n";
    }
}
 
void Bank::withdrawal(double money)
{
    if (money > 0)
    {
        money_ -= money;
        std::cout << "$" << money_ << " money : "<<std::endl;
        
    }
    else
    {
        std::cout << "Input fail.\n";
    }
}