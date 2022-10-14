#include<iostream>
struct Pizza{

    std::string name;
    float dia;
    float weight;

};

int main(){
    Pizza *p = new Pizza;
    std::cout<<"请输入比萨饼直径：";
    std::cin>>p->dia;
    std::cout<<"请输入比萨饼名字：";
    std::cin>>p->name;
    std::cout<<"请输入比萨饼重量：";
    std::cin>>p->weight;
    std::cout<<"name: "<<p->name<<", "<<"dia: "<<p->dia<<", "<<"weight: "<<p->weight<<std::endl;
    return 0;
}