/*
    输入为aaa
    bbb
    cccc
*/

#include <iostream>
#include <string>
#include <cstring>
 
using namespace std;
 
void strcount(const string str);
 
int main()
{
    using namespace std;
    string input;
    cout << "Enter a line:\n";
    cin>>input;
    while (cin)
    {
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        cin>>input;
        if (input == " ")
            break;
    }
    cout << "Bye\n";
    return 0;
}
 
void strcount(const string str)
{
    static int total = 0;
    int count = 0;
    cout << "\"" << str << "\" contains ";
    while (str[count])
        count++;
    total += count;
    cout << count << " characters\n";
    cout << total << " characters in total\n";
}