#ifndef BANK_H_
#define BANK_H_
#include <string>
 
class Bank
{
private:
    std::string name_;
    std::string id_;
    double money_;
public:
    Bank(const std::string & name, const std::string & id, double money = 0.0);
    void show();
    void deposit(double money);
    void withdrawal(double money);
};
 
#endif