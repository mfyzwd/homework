#include <iostream>


void Fun();
int main(){

    Fun();
    return 0;

}

void Fun(){

    using namespace std;
    int age=0,hours=0,minutes=0;
    cout<<"Enter your age:";
    cin>>age;
    cout<<"{:"<<12*age;
    cout<<"}"<<endl;
    cout<<"the number of hours:";
    cin>>hours;
    cout<<endl;
    cout<<"Enter the number of minutes:";
    cin>>minutes;
    cout<<endl;
    cout<<"Time:"<<hours<<":"<<minutes<<endl;

}