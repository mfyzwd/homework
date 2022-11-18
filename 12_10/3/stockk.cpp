#include "stock.h"
#include<iostream>

int main(){
    using namespace std;
    Stock stock1("chandler",12,18.0);
    cout<<stock1;

    Stock stock2=Stock("Monica",15,16.0);
    cout<<stock2;
    
    const Stock *top = &stock1.topval(stock2);
    cout<<"\nNow show the top val:\n";
    cout<<*top;

    return 0;

}