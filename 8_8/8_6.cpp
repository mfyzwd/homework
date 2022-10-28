#include <iostream>
#include <cstring>

template <typename T>
T maxn(T a[], int n);
template <typename T>
void print(T max,T a[],int n);
 
template <> char * maxn(char * a[], int n);
 
int main()
{    
    using namespace std;
    int a1[6] = { 1, 2, 5, 3, 4 ,6};
    double a2[4] = { 0.1, 0.2, 0.5, 0.3};
    int max1;
    double max2;
    max1 = maxn(a1, 6);
    max2 = maxn(a2, 4);
    char * a3[5] = { (char*)"one", (char*)"two", (char*)"three", (char*)"four", (char*)"five" };
    char * max3;
    max3 = maxn(a3, 5);
    print(max1,a1,6);
    print(max2,a2,4);
    print(max3,a3,5);
    return 0;
}
 
template <typename T>
T maxn(T a[],int n)
{
    T max=a[0];
    for(int i=1;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    return max;
}
 
template <> char * maxn(char * a[], int n)
{
    int index = 0;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < strlen(a[i]))
        {
            max = strlen(a[i]);
            index = i;
        }
    }    
    char * address = a[index];
    return address;
}

template <typename T>
void print(T max,T a[],int n){
    using namespace std;
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    cout<<"max "<<max;
    cout<<endl;
}