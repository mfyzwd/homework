#include<iostream>

int main(){
 
    using namespace std;
 
    const int month=12;
    int sell[month];
    int sum = 0;
    const char * months[month] =
    {
		"January","February","March","April","May","June","July",
		"August","September","October","November","December"
    };
 
    for (int i = 0; i < month; i++){
	    cout << months[i] << ": ";
        cin >> sell[i];
	    sum += sell[i];
    }
 
    cout << "销售总额 " << sum << endl;
    return 0;



}