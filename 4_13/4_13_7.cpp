#include<iostream>
struct Pizza{

    std::string name;
    float dia;
    float weight;

};

int main(){
    Pizza p{"JinTianChiSha",50,500};
    std::cout<<"name: "<<p.name<<", "<<"dia: "<<p.dia<<", "<<"weight: "<<p.weight<<std::endl;
    return 0;
}