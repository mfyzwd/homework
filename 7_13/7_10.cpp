#include<iostream>

double add(double x,double y);
double quo(double x,double y);
double calculate(double x,double y,double (*pf)(double,double));

int main(){
    std::cout<<"Enter two numbers"<<std::endl;
    double x=0.0,y=0.0;
    std::cin>>x>>y;
    double sum=calculate(x,y,add);
    double quotient=calculate(x,y,quo); 
    std::cout<<"add: "<<sum<<std::endl;
    std::cout<<"quotient: "<<quotient<<std::endl; 
    return 0;
}

double add(double x,double y){
    return x+y;
}

double quo(double x,double y){
    double num=0.0;
    num=x*1.0/y;
    return num;
}


double calculate(double x,double y,double (*pf)(double,double)){
   
    return (*pf)(x,y);

}