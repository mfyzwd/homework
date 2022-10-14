#include <iostream>
 
int main()
{
    std::cout << "Enter numbers of rows: ";
    int row;
    std::cin >> row;
 
    int i;
    for (i = 1; i <= row; i++){
	    int j;
	    int k;
	    for (j = 1; j <= (row - i); j++)
	    std::cout << ".";
	    for (k = 1; k <= i; k++)
	    std::cout << "*";
	    std::cout << std::endl;
    }
	
    return 0;
}