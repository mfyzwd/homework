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
    cout<<&buffer<<endl;
    chaff *pc1 = new (buffer) chaff[2];//在buffer里申请两个chaff结构体,chaff的两个结构体对象的首地址，与buffer的首地址相同
    cout<<&pc1[0]<<endl;
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

    return 0;
}

//我理解的是不用释放申请的动态数组，因为动态数组是在数组buffer 里申请的