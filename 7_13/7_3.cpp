#include<iostream>


struct box
{
    char make[40];
    float height;
    float width;
    float length;
    float volume;
};

void display(box temp);
double cal(box *A);

int main(){
    using namespace std;
    box A;
    cout << "Enter the box maker: ";
    cin >> A.make;
    cout << "Enter the height: ";
    cin >> A.height;
    cout << "Enter the width: ";
    cin >> A.width;
    cout << "Enter the length: ";
    cin >> A.length;
    cout << "Enter the volume: ";
    cin >> A.volume;

    display(A);
    double vol=0.0;
    vol=cal(&A);

    return 0;
}

void display(box A)
{
    std::cout << "The maker of the box is " << A.make << "." << std::endl;
    std::cout << "The height of the box is " << A.height << "." << std::endl;
    std::cout << "The width of the box is " << A.width << "." << std::endl;
    std::cout << "The length of the box is " << A.length << "." << std::endl;
    std::cout << "The volume of the box is " << A.volume << "." << std::endl;
}
double cal(box *A)
{
    double vol;
    vol = A->height * A->width * A->length;
    return vol;
}


