#include<iostream>
#include<cctype>
#define size 20
struct bop{
    char fullname[size]; //real name
    char title[size];    //job title
    char bopname[size];  //secret BOP name
    int preference;      //0=fullname,1=title,2=bopname
};
int main(){
    using namespace std;
    char ch;
    cout<<"Benevolent Order of Programmers Report"<<endl;
    cout<<"a.display by name       b.display by title"<<endl;
    cout<<"c.display by bopname    d.display by preference"<<endl;
    cout<<"q.quit"<<endl;
    cout<<"Enter your choice: ";
    bop BOP[5]={
        {"Wimp Macho","title","Wimp Macho",0},
        {"Raki Rhodes","Junior Programmer","Raki Rhodes",1},
        {"Celia Laiter","MIPS","MIPS",2},
        {"Hoppy Hipman","Analyst Trainee","Hoppy Hipman",1},
        {"Pat Hand","LOOPY","LOOPY",2}
    };
    cin>>ch;
    while(isalpha(ch)){
        switch (ch)
        {
        case 'a':
            for(int i=0;i<5;i++){
                cout<<BOP[i].fullname<<endl;
            }
            break;
        case 'b':
            for(int i=0;i<5;i++)
                cout<<BOP[i].title<<endl;
            break;
        case 'c':
            for(int i=0;i<5;i++)
                cout<<BOP[i].bopname<<endl;
            break;
        case 'd':
            for(int i=0;i<5;i++)
                if(BOP[i].preference==0)
                    cout<<BOP[i].fullname<<endl;
                else if(BOP[i].preference==1)
                    cout<<BOP[i].title<<endl;
                else
                    cout<<BOP[i].bopname<<endl;
            break;
        case 'q':
            cout<<"quit"<<endl;
            return 0;
        default:
            break;
        }
        cin>>ch;
    }
    return 0;

}

