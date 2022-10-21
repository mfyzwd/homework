//Input函数有问题  没有改过来
#include<iostream>

int Input(double grade[],int n);
void show(double grade[],int n);
double ave(double grade[],int n);

int main(){
    double grade[10];
    double average=0.0;
    int num=Input(grade,10);
    show(grade,num);
    average=ave(grade,num);
    std::cout<<"The average score is : " <<average<<std::endl;
    return 0;
}

int Input(double grade[],int n){
    double score=0.0;
    int count=0;
    std::cout<<"Enter the score,'q' to quit \n";
    std::cout<<count+1<<"、";
    std::cin>>score;
    while(score!='q'){
        grade[count]=score;
        
        count++;
        std::cout<<count+1<<"、";
        std::cin>>score;
    
    }       
    return count;
}

void show(double grade[],int n){
    std::cout << "The scores are:"<<std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout<<grade[i]<<"\t";
    }
}

double ave(double grade[],int n){
    double sum=0.0;
    for(int i=0;i<n;i++){
        sum += grade[i];
    }

    return sum*1.0/n;

}