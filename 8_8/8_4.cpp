#include <iostream>
using namespace std;
#include <cstring>
struct stringy
{
    char * str;
    int ct;
};
 
void set(stringy &st, const char * x);
void show(stringy &st, const int n = 1);
void show(const char * x,int n=2);
 
int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    return 0;
}
 
void set(stringy &st, const char * x)
{
    st.ct = strlen(x);
    st.str = new char[st.ct+1];
    strcpy(st.str,x);
}
 
void show(stringy &st, const int n)
{
    cout << st.str << endl;
    cout <<n<< endl;
}
 
void show(const char * x, const int n)
{
    cout << x << endl;
    cout <<n<< endl;
}