#include<iostream>
#include<cctype>

int Fill_array(double ar[],int n);
void Show_array(double ar[],int n);
void Reverse_array(double ar[],int n);

int main(){

    double ar[100];
    int count=Fill_array(ar,100);
    Show_array(ar,count);
    Reverse_array(ar,count);
    std::cout << "After the reverse.";
    Show_array(ar, count);
    std::cout << "After the reverse.";
    Reverse_array(ar+1,count-2);
    Show_array(ar, count);
    std::cout<<std::endl;
    return 0;
}

int Fill_array(double ar[],int n){
    double num=0.0;
    std::cout<<"Enter the data of array. "<<std::endl;
    int count=0;
    std::cin>>num;
    while(count<n){
        std::cin>>num;
        if(!std::cin)
            break;
        
        else{
            ar[count]=num;
        }
        
        count++;
    }
    return count;
}

void Show_array(double ar[],int n){
    for(int i=0;i<n;i++){
        std::cout<<ar[i]<<"\t";
    }
    std::cout<<std::endl;

}

void Reverse_array(double ar[],int n){
    double temp=0.0;
    for(int i=0;i<(n/2);i++){
        temp=ar[i];
        ar[i]=ar[n-i-1];
        ar[n-i-1]=temp;
    }

}