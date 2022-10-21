#include <iostream>
#include<cctype>
int main(){
    char ch;
    std::cout<<"Enter your input, type @ to terminate input"<<std::endl;
    std::cin.get(ch);
    while(ch!='@'){
        if(isalpha(ch)){    //判断是否为字母
            if(islower(ch)){   //判断是否为小写字母
                ch=toupper(ch);//转换为大写
            }
            else
                ch=tolower(ch);//转换为小写
        }
        if(isdigit(ch)==false)//如果不是数字则输出ch
            std::cout<<ch;
        std::cin.get(ch);
    }
    std::cout<<std::endl;
    return 0;

}
