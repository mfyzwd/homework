#include<iostream>
#include<string>
struct CandyBar{

    std::string name;
    float weight;
    int calorie;

};

int main(){
    CandyBar snack{"Mocha Munch",2.3,350};
    std::cout<<"品牌："<<snack.name<<std::endl;
    std::cout<<"重量："<<snack.weight<<std::endl;
    std::cout<<"卡路里："<<snack.calorie<<std::endl;
    return 0;

}