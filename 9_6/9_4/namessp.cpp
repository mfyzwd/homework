#include <iostream>
#include "namesp.h"
int main()
{
    SALES::Sales s1;
    SALES::Sales s2;
    double ar[4] = { 99.8, 88.9, 77.9,66.9};
    setSales(s1, ar, 4);
    showSales(s1);
    setSales(s2, ar, 4);
    showSales(s2);
    std::cout << std::endl;
    return 0;
}