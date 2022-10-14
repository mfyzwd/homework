#include <iostream>

int main(){
    char fname[20],lname[20],grade;
    int age=0;
    std::cout<<"What is your first name? ";
    std::cin.get(fname,20).get();
    std::cout<<"What is your last name? ";
    std::cin.getline(lname,20);
    std::cout<<"What letter grade do you deserve? ";
    std::cin>>grade;
    std::cout<<"What is your age?";
    std::cin>>age;
    std::cout<<"Name: "<<lname<<", "<<fname<<std::endl;
    grade=grade+1;
    std::cout<<"Grade: "<<grade<<std::endl;
    std::cout<<"Age: "<<age<<std::endl;
    return 0;

}