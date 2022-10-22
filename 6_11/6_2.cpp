#include<iostream>

int main(){
    double donation[10];
    double sum=0.0,average=0.0;
    std::cout<<"Enter 10 donation"<<std::endl;
    int len=0,count=0,num=0;
    std::cin>>num;
    for(int i=0;i<10;i++) {
   
        if(0<=num && num<10){
            len++;
            donation[i]=num;
            sum=num+sum;
            i++;
            std::cin>>num;
        }
        else
            break;
    }
    average=sum*1.0/len;
    for(int j=0;j<len;j++){
        if(donation[j]>average)
            count++;
    }
    std::cout<<"The average = "<<average<<std::endl;
    std::cout<<"In this array has "<<count<<" values larger than average"<<std::endl;

    return 0;

}