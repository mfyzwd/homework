#include<iostream>


int main(){
    double donation[10]={0};
    double sum=0.0,average=0.0;
    std::cout<<"Enter 10 donation"<<std::endl;
    int i=0,len=0,count=0;
    
    while(1){
        std::cin>>donation[i];
        if(donation[i]<=9&&donation[i]>=0){
            len++;
            sum=donation[i]+sum;
            i++;
        }
        else
            break;

    }
    average=sum/len;
    for(int j=0;j<len;j++){
        if(donation[j]>average)
            count++;
    }
    std::cout<<"The average = "<<average<<std::endl;
    std::cout<<"In this array has "<<count<<" values larger than average"<<std::endl;

    return 0;

}