
#include <iostream>
using namespace std;
const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);
 
int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
	continue;
 
    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
	    display1(ptr_stu[i]);
	    display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout << "Done\n";
    return 0;
}

int getinfo(student pa[], int n){
    int count=0;
    for (int i = 0; i<n; i++){
        count++;
	    cout << "Enter the fullname:";
	    cin.get(pa[i].fullname, 30).get();
	    cout << "Enter the hobby:";
	    cin >> pa[i].hobby;
	    cout << "Enter the ooplevel:";
	    cin >> pa[i].ooplevel;
    }
    return count;
}

void display1(student st){
    cout<<"fullname: "<<st.fullname<<endl;
    cout<<"hobby: "<<st.hobby<<endl;
    cout<<"opplevel: "<<st.ooplevel<<endl;

}

void display2(const student * ps){
    cout<<"fullname: "<<ps->fullname<<endl;
    cout<<"hobby: "<<ps->hobby<<endl;
    cout<<"opplevel: "<<ps->ooplevel<<endl;
}

void display3(const student pa[], int n){
    for(int i=0;i<n;i++){
        cout<<"fullname: "<<pa[i].fullname<<endl;
        cout<<"hobby: "<<pa[i].hobby<<endl;
        cout<<"opplevel: "<<pa[i].ooplevel<<endl;
    }
}