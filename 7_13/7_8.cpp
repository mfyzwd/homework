#include <iostream>

const int Seasons = 4;
const char * Snames[Seasons] = { "Spring", "Summer", "Fall", "Winter" };
void fill(double pa[]);
void show(double pa[]);

 
int main()
{
    double expenses[Seasons];
    fill(expenses);
    show(expenses);
    return 0;
}
 
void fill(double pa[])
{
    for (int i = 0; i < Seasons; i++)
    {
	    std::cout << "Enter " << Snames[i] << " expenses: ";
	    std::cin >> pa[i];
    }
}
 
void show(double pa[])
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
	    std::cout << Snames[i] << ": $" << pa[i] << std::endl;
	    total += pa[i];
    }
    std::cout << "Total Expenses: $" << total << std::endl;
}