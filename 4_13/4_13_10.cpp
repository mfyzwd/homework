#include<iostream>
#include<array>

int main(){

    using namespace std;
    const int a=3;
    array<double,a>grade;
    cout<<"请输入第一次成绩";
    cin>>grade[0];
    cout<<"请输入第二次成绩";
    cin>>grade[1];
    cout<<"请输入第三次成绩";
    cin>>grade[2];
    cout<<"次数为："<<a<<endl;
    cout<<"成绩为："<<grade[0]<<", "<<grade[1]<<", "<<grade[2]<<endl;
    cout<<"平均成绩为："<<(grade[0]+grade[1]+grade[2])/3.0<<endl;
    
    return 0;


}