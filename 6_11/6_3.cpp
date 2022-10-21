#include<iostream>
#include<cctype>

int main(){
    char ch;
    std::cout<<"Please enter one of the following choices: "<<std::endl;
    std::cout<<"c) carnivore            p) pianist"<<std::endl;
    std::cout<<"t) tree                 g) game"<<std::endl;
    std::cin>>ch;
    std::cin.ignore();
    while(isalpha(ch)){
        switch (ch)
        {
        case 'c':
            std::cout<<"A maple is a carnivore."<<std::endl;
            break;
        case 'p':
            std::cout<<"A maple is a pianist."<<std::endl;
            break;
        case 't':
            std::cout<<"A maple is a tree."<<std::endl;
            break;
        case 'g':
            std::cout<<"A maple is a game."<<std::endl;
            break;
        default:
            std::cout<<"Please enter a c, p, t, or g:";
            break;
        }
        std::cin>>ch;
            
    }
    return 0;

}