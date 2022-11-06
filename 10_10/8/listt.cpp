#include <iostream>
#include "list.h"
#include <cctype>
 
int main()
{
    List l;
    char ch;
    int data;
    std::cout << "Please enter C to create your list, P to process the list,Q to quit:\n";   
    while (std::cin >> ch && toupper(ch) != 'Q')
    {
        while (std::cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            std::cout << "\a";
            continue;
        }
        switch (ch)
        {
            case 'C':
            case 'c':
                if (l.isfull())
                    std::cout << "The list already full.\n";
                else
                {
                    std::cout << "Enter the data: ";
                    std::cin >> data;
                    l.add(data);
                    l.show();
                }
                break;
            case 'P':
            case 'p':
                if (l.isempty())
                    std::cout << "The list already empty.\n";
                    l.show();
                    break;
        }
        std::cout << "Please enter C to create your list, P to process the list, Q to quit:\n";
    }
    return 0;
}