#include <iostream>
#include <cstring>
#include "cow.h"

Cow::Cow(){
    name[0]='\0';
    hobby=NULL;
    weight=0.0;
}
Cow::Cow(const char *nm,const char *ho,double wt){

    strcpy(name,nm);
    if(strlen(nm)>=20)
        name[19]='\0'; //如果nm不止19个字符
    hobby=new char[strlen(ho)+1];
    strcpy(hobby,ho);
    weight=wt;
}
Cow::Cow(const Cow &c){

    strcpy(name,c.name);
    hobby=new char[strlen(c.hobby)+1];
    strcpy(hobby,c.hobby);
    weight=c.weight;
}
Cow::~Cow()
{
    delete[] hobby;
}
Cow & Cow::operator=(const Cow & c){
    if(this == &c )
        return *this;
    delete [] hobby;
    hobby=new char[strlen(c.hobby)+1];
    strcpy(hobby,c.hobby);
    strcpy(name,c.name);
    weight = c.weight;

    return *this;
}

void Cow::ShowCow() const{
    using namespace std;
    cout << "The name is " << name << endl;
    cout << "The hobby is " << hobby << endl;
    cout << "The weight is " << weight << endl;
}
