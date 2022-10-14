#include<iostream>

int main(){
    using namespace std;
    int a,b,sum=0,i;
    cout<<"请输入两个整数"<<endl;
    cout<<"第一个整数"<<endl;
    cin>>a;
    cout<<"第二个整数"<<endl;
    cin>>b;
    i=a;
    while(i<=b){
        sum=sum+i;
        i++;
    }
    cout<<"总数为："<<sum<<endl;
    return 0;

}