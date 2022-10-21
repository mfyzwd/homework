//这题写错了  读取不到金额没改过来

#include <iostream>

#include<fstream>

struct member{
    std::string name;// 成员
    double amount;  //数额
};

int main(){
    using namespace std;
    ifstream inFile;
    char filename[50];
    
    cout<<"Please enter the number of donors: ";
    cin.getline(filename,50);
    inFile.open(filename);

    int num;
    inFile>>num;

    member *P=new member[num];
    int count=0;
    for(int i=0;i<num;i++){
        inFile>>P[i].name;
        inFile>>P[i].amount;
        if(P[i].amount > 10000)
            count++;
    }
    if(count==0){
        cout<<"Grand Patrons"<<endl;
        cout<<"none"<<endl;
        cout<<"Patrons"<<endl;
        for(int i=0;i<num;i++){
            cout<<P[i].name<<"\t"<<P[i].amount<<endl;
        }
    }
    if(count==num){
        cout<<"Grand Patrons"<<endl;
        for(int i=0;i<num;i++){
            cout<<P[i].name<<"\t"<<P[i].amount<<endl;
        }
        cout<<"Patrons"<<endl;
        cout<<"none"<<endl;  
    }
    if(count>0&&count<num){
        cout<<"Grand Patrons"<<endl;
        for(int i=0;i<num;i++){
            if(P[i].amount>10000)
                cout<<P[i].name<<"\t"<<P[i].amount<<endl;
        }
        cout<<"Patrons"<<endl;
        for(int j=0;j<num;j++){
            if(P[j].amount<10000)
                cout<<P[j].name<<"\t"<<P[j].amount<<endl;
        }
    }

    delete [] P;
    inFile.close();
    return 0;

}