#include <iostream>
template <typename T>
T max5(T a[5]);

template <typename T>
void print(T a[5],T max);
 
int main()
{
    
    int a1[5] = { 1, 2, 5, 3, 4 };
    double a2[5] = { 0.1, 0.2, 0.5, 0.3, 0.4};
    int max1;
    double max2;
    max1 = max5(a1);
    max2 = max5(a2);
    print(a1,max1);
    print(a2,max2);
    return 0;
}
 
template <typename T>
T max5(T a[5])
{
    T max=a[0];
    for(int i=1;i<5;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    return max;
}

template <typename T>
void print(T a[5],T max){
    using namespace std;
    for(int i=0;i<5;i++){
        cout<<a[i]<<"\t";
    }
    cout<<"max"<<max;
    cout<<endl;
}