#include <iostream>
void fun(std::string &str, int n = 0);
int count = 0; 
int main()
{
    std::string str = "Hello word";
    fun(str);
    fun(str);
    fun(str, 1);
    fun(str, 2);
    fun(str, 3);
    return 0;
}
 
void fun(std::string &str, int n)
{  
    count++;
    if (n == 0)
	   std::cout << str << std::endl;
    else
    {
        for (int i = 0; i < count; i++)
            std::cout << str << std::endl;
    }
    std::cout << std::endl;
}