#include <iostream>
 
int main()
{
    using namespace std;
 
    const int year = 3;
    const int month = 12;
    string months[month] =
    {
	    "January","February","March","April","May","June","July",
        "August","September","October","November","December"
    };
    int sell[month][year];
    int sum[3] = { 0 };
    int SUM = 0;
 
    for (int i = 0; i < year; i++)
    {
	    cout << "第 " << i + 1 << " 年:" << endl;
	    for (int j = 0; j < month; j++)
	    {
	        cout << months[j] << ": ";
	        cin >> sell[j][i];
	        sum[i] = sum[i] + sell[j][i];
	    }
    }
 
    SUM = sum[0] + sum[1] + sum[2];
 
    cout << "第一年总额 " << sum[0] << endl;
    cout << "第二年总额 " << sum[1] << endl;
    cout << "第三年总额 " << sum[2] << endl;
    cout << "三年总额 " << SUM << endl;
    return 0;
}