#include <iostream>

int main(){
    const float a=12.0;
    int height =0;
    std::cout<<"请输入您的身高英寸"<<"_";
    std::cin>>height;
    std::cout<<"身高为"<<height<<"英寸"<<std::endl;
    std::cout<<"身高为"<<float(height/a)<<"英尺"<<std::endl;
    return 0;

}