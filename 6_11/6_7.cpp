#include<iostream>
#include<cctype>

int main(){
    std::string word;
    std::cout<<"Enter words (q to quit): "<<std::endl;
    int num1=0,num2=0,num3=0;
    std::cin>>word;
    while(word[0]!='q'){
        if(isalpha(word[0])){
            if(word[0]=='a'||word[0]=='e'||word[0]=='i'||word[0]=='o'||word[0]=='u'
            ||word[0]=='A'||word[0]=='E'||word[0]=='I'||word[0]=='O'||word[0]=='U')
                num1++;
            else
                num2++;
        }
        else
            num3++;
        std::cin>>word;
    }
    std::cout << num1 << " words beginning with vowels" << std::endl;
    std::cout << num2 << " words beginning with consonants" << std::endl;
    std::cout << num3 << " others" << std::endl;
    return 0;
}