#include<iostream>
#include<array>

int main(){
   
    const int ArSize=101;
    array<long double,ArSize>factorials;
    factorials[1] = factorials[0] = 1;
    for(int i=2;i<ArSize;i++)
        factorials[i]=i*factorials[i-1];
    for(j=0;j<ArSize;j++)
        std::cout<<i<<"!="<<factorials[i]<<std::endl;    
    return 0;

}