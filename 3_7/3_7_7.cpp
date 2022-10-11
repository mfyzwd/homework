#include <iostream>
 int main(){

    const float a=0.6214,b=3.875;
    float gasoline=0.0;
    std::cout<<"输入耗油量： ";
    std::cin>>gasoline;
    std::cout<<"转换为美国风格耗油量为："<<1.0/(gasoline*a/b)<<std::endl;
    return 0;

 }