#include<iostream>
#include "namesp.h"

namespace SALES
{
    void Sales::setSales(const double ar[], int n)
    {
        int i=0,j=0;
        while(i<n-4)
            i++;
        while(i<n){
            sales_[j]=ar[i];
            j++;
            i++;
        }
        average_ = (sales_[0] + sales_[1] + sales_[2] + sales_[3]) / 4;
        double max = sales_[0];
        double min = sales_[0];
        for (int i = 1; i < 4; i++)
        {
            if (sales_[i] > max)
            {
                max = sales_[i];
            }
            if (sales_[i] < min)
            {
                min = sales_[i];
            }
        }
        max_ = max;
        min_ = min;
    }
 
    void Sales::setSales()
    {
        using namespace std;
        cout << "Please enter 4 quarters for sales:\n";
        for (int i = 0; i < 4; i++)
        {
            cout<< i + 1 << " : ";
            cin >> sales_[i];
        }
        average_ = (sales_[0] + sales_[1] + sales_[2] + sales_[3]) / 4;
        double max = sales_[0];
        double min = sales_[0];
        for (int i = 1; i < 4; i++)
        {
            if (sales_[i] > max)
            {
                max = sales_[i];
            }
            if (sales_[i] < min)
            {
                min = sales_[i];
            }
        }
        max_ = max;
        min_ = min;
    }
 
    void Sales::showSales()
    {
        using namespace std;
        cout << "The 4 quarters are $" << sales_[0] << ", $" << sales_[1] << ", $" << sales_[2] << ", $" << sales_[3] << endl;
        cout << "The average income is $" << average_ << endl;
        cout << "The maximum income is $" << max_ << endl;
        cout << "The minimum income is $" << min_ << endl;
    }
}