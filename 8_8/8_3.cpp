/*
    输入为 asas
    bs
*/

#include <iostream>
#include <cctype>
#include <string>

void fun(std::string &str);

int main()
{
    using namespace std;
    cout << "Enter a string (q to quit): ";
    string str;
    cin>>str;
    while (str != "q")
    {
        fun(str);
        cout << str << endl;
        cout << "Next string (q to quit): ";
        cin>>str;
    }
    cout << "Bye." << endl;
    return 0;
}
 
void fun(std::string &str)
{
    int i=0;
    while(str[i])
   {
      putchar (toupper(str[i]));
      i++;
   }
}