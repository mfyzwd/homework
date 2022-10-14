#include<iostream>
#include<cstring>
int main(){
    int count=0;
    char word[100];
    std::cout<<"Enter words (to stop, type the word done):"<<std::endl;
    while(strcmp(word, "done") != 0){
        count++;
        std::cin>>word;
       
    }
    std::cout << std::endl << "You entered a total of " << count << " words." << std::endl;
    return 0;
}