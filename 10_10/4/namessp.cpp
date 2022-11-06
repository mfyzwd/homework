#include <iostream>
#include "namesp.h"
int main()
{
    SALES::Sales s1;
    SALES::Sales s2;
    s1.setSales();
    s1.showSales();
    double ar[4] = { 99.8, 88.9, 77.9,66.9};
    s2.setSales(ar, 4);
    s2.showSales();
    std::cout << std::endl;
    return 0;
}