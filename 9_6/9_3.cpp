/*
    输入为 af
           5
          aaaa
          6
*/

#include <iostream>
#include <cstring>
#include <new>

struct chaff
{
    char dross[20];
    int slag;
};
 
int main()
{
    using namespace std;
    char buffer[500];
    chaff *pc1 = new (buffer) chaff[2];
    for (int i = 0; i < 2; i++)
    {   
        cout<<"Enter dross of: ";
        cin.get(pc1[i].dross,500);
        cout<<"Enter slag of: ";
        cin>>pc1[i].slag;
        cin.get();
    }

    for (int i = 0; i < 2; i++)
    {
        cout << i + 1 << ": ";
        cout << "pc1.dross: " << pc1[i].dross << ", pc1.slag: " << pc1[i].slag << endl;
    }
    delete[] pc1;
    return 0;
}

