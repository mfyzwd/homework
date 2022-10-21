#include<iostream>

int factorial(int n);

int main(){
    int n=0;
    std::cout<<"This program can calculate the factorial. 'q' to quit."<<std::endl;
    while(1){
        std::cin>>n;
        if(n=='q')
            break;
        if(n<0)
            std::cout<< "Bad input, please enter a positive number!" <<std::endl;
        
        int sum=factorial(n);
        std::cout<<n<<" the factorial : "<<sum<<std::endl;
        sum=0;
    }

    return 0;
}

int factorial(int n){
    if(n==0)
        return 1;
    return n*factorial(n-1);
}