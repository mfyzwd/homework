#include<iostream>
#include "namesp.h"

namespace SALES
{
    void setSales(Sales & s, const double ar[], int n)
    {
        int i=0,j=0;
        while(i<n-4)
            i++;
        while(i<n){
            s.sales[j]=ar[i];
            j++;
            i++;
        }
        s.average = (s.sales[0] + s.sales[1] + s.sales[2] + s.sales[3]) / 4;
        double max = s.sales[0];
        double min = s.sales[0];
        for (int i = 1; i < 4; i++)
        {
            if (s.sales[i] > max)
            {
                max = s.sales[i];
            }
            if (s.sales[i] < min)
            {
                min = s.sales[i];
            }
        }
        s.max = max;
        s.min = min;
    }
 
    void setSales(Sales & s)
    {
        using namespace std;
        cout << "Please enter 4 quarters for sales:\n";
        for (int i = 0; i < 4; i++)
        {
            cout<< i + 1 << " : ";
            cin >> s.sales[i];
        }
        s.average = (s.sales[0] + s.sales[1] + s.sales[2] + s.sales[3]) / 4;
        double max = s.sales[0];
        double min = s.sales[0];
        for (int i = 1; i < 4; i++)
        {
            if (s.sales[i] > max)
            {
                max = s.sales[i];
            }
            if (s.sales[i] < min)
            {
                min = s.sales[i];
            }
        }
        s.max = max;
        s.min = min;
    }
 
    void showSales(const Sales & s)
    {
        using namespace std;
        cout << "The 4 quarters are $" << s.sales[0] << ", $" << s.sales[1] << ", $" << s.sales[2] << ", $" << s.sales[3] << endl;
        cout << "The average income is $" << s.average << endl;
        cout << "The maximum income is $" << s.max << endl;
        cout << "The minimum income is $" << s.min << endl;
    }
}