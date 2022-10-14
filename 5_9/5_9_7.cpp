#include<iostream>
#include<string>

struct car{
    std::string name;
    int year;

};

int main(){

    using namespace std;

    int num=0;
    cout<<"How many cars do you wish to catalog?";
    cin>>num;

    car * P=new car[num];
    for(int i=0; i<num;i++){

        cout<<"Car #"<<i+1<<endl;
        cout<<"Please enter the make:";
        cin>>P->name;
        cout<<"Please enter the year made:";
        cin>>P->year;

    }
    cout<<"Here is your collection:"<<endl;
    for(int i=0;i<num;i++)
        cout<<*(P+i)->year<<" "<<*(P+i)->name<<endl;
        return 0;

}
