#include<iostream>

double num(int x,int y);

int main(){

    int x=0,y=0;
    double average=0.0;
    std::cout<<"Enter two number:";
    while(1){
        std::cin>>x>>y;
        if(x==0 || y==0)
            break;
        average = num(x,y);
        std::cout<<"The harmonic average is "<<average<<std::endl;
        
    }
    return 0;
}

double num(int x,int y){
    double average=0.0;
    return average=2.0*x*y/(x+y);
}