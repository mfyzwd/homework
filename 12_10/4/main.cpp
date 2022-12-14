#include <iostream>
#include "stack.h"
#include <ctype.h>



int main(void)
{
    using namespace std;
	Stack st(5);
	Item item;

	for(int i = 0; i < 5; i++)
	{
		cout << "Enter a number you want to push to stack: " << endl;
		cin >> item;
		while(cin.get() != '\n');
		st.push(item);
	}

	Stack st_new(st);
	for(int i = 0; i < 5; i++)
	{
		st_new.pop(item);
		cout << item << " is poped." << endl;
	}

	return 0;
}

/*
Enter a number you want to push to stack: 
1
Enter a number you want to push to stack: 
2
Enter a number you want to push to stack: 
3
Enter a number you want to push to stack: 
4
Enter a number you want to push to stack: 
5
5 is poped.
4 is poped.
3 is poped.
2 is poped.
1 is poped.
*/
