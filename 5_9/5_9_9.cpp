#include<iostream>
#include<string>
int main(){
    int count=0;
    std::string str;
    std::cout<<"Enter words (to stop, type the word done):"<<std::endl;
    while(str != "done"){
        count++;
        std::cin>>str;
        
    }
    std::cout << std::endl << "You entered a total of " << count << " words." << std::endl;
    return 0;
}