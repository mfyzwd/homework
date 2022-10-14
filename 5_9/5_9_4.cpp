#include<iostream>

int main(){

    int sum1=100,sum2=100,count=0;
    while(sum1>=sum2){
        sum1=sum1+100*0.1;
        sum2=sum2*0.05+sum2;
        count++;
    }
    std::cout<<count<<"年后，C投资超过D"<<std::endl;
    std::cout<<"D资产为："<<sum1<<std::endl;
    std::cout<<"C资产为："<<sum2<<std::endl;
    return 0;

}