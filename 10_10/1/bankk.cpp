#include <iostream>
#include "bank.h"
 
int main()
{
    using namespace std;
    cout << "Please enter your information for operation:\n";
    string name;
    string id;
    double money;
    cout << "Your name: ";
    cin>>name;
    cout << "Your ID: ";
    cin>>id;
    cout << "Your money: ";
    cin>>money;
    Bank bank1(name, id, money);
    bank1.show();
    money=0.0;
    cout << "Please choose what you want, d for deposit, w for withdraw,enter q to exit";
    char flag;
    cin>>flag;
    while(flag != 'q'){
        if (flag == 'd')
        {
            cout << "Please input the deposit amount: ";
            cin >> money;
            bank1.deposit(money);
            bank1.show();
        }
        else if (flag == 'w')
        {
            cout << "Please input the withdraw amount: ";
            cin >> money;
            bank1.withdrawal(money);
            bank1.show();
        }
        else
            break;
        bank1.show();
        cout << "Please choose what you want, d for deposit, w for withdraw, q to quit: "<<endl;
        cin >> flag;
        
    }
    return 0;
}