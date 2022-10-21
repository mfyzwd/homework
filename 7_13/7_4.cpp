#include <iostream>
double Odds(int num1, int num2, int bingo1, int bingo2);

int main()
{
    int Num1 = 47,Num2 = 27,win1= 5,win2 = 1;
    std::cout << "Your Probability to win the first prize in this game is\t";
    double probaility;
    probaility = Odds(Num1, Num2, win1, win2);
    std::cout << probaility << std::endl;
    return 0;
}
 
double Odds(int num1, int num2, int win1, int win2)
{
    double pro1, pro2;
    pro1 = double(win1) / double(num1);
    pro2 = double(win2) / double(num2);
    return  pro1 * pro2;
}