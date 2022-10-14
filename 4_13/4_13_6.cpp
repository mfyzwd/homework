#include<iostream>
struct CandyBar{

    std::string name;
    float weight;
    int calorie;

};
int main(){

    CandyBar snack[10]={
        {"A",2.3,200},
        {"B",5.1,240}
    };

    std::cout<<"name "<<snack[0].name<<", "<<"weight "<<snack->weight<<", "<<"calorie"<<snack->calorie<<std::endl;

}