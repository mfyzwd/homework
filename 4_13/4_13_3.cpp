#include<iostream>
#include<cstring>

int main(){
    using namespace std;
    char fname[20],lname[20],name[20];  
    cout<<"Enter your first name: ";
    cin.get(fname,20).get();
    cout<<"Enter your last name: ";
    cin.get(lname,20).get();
    strcat(lname,",");
    strcat(lname,fname);
    cout<<"Here's the information in a single string: "<<lname<<std::endl;
    return 0;  

}