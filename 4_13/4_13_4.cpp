#include<iostream>
#include<string>

int main(){
    using namespace std;
    string fname,lname,name;  
    cout<<"Enter your first name: ";
    cin>>fname;
    cout<<"Enter your last name: ";
    cin>>lname;
    name=lname+","+fname;
    cout<<"Here's the information in a single string: "<<name<<std::endl;
    return 0;  

}