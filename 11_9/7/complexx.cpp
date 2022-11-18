/*测试
989
12
*/
#include <iostream>
#include "complex0.h"

using namespace std;

int main(void)
{
	complex a(3.0, 4.0);
	complex c;
	cout << "Enter a complex number (q to quit): \n";

	while(cin >> c)
	{
		cout << "c = " << c << endl;
		cout << "complex conjugate is " << ~c << endl;
		cout << "a = " << a << endl;
		cout << "a + c = " << a + c << endl;
		cout << "a - c = " << a - c << endl;
		cout << "a * c = " << a * c << endl;
		cout << "2 * c = " << 2 * c << endl;
		cout << "Enter a complex number (q to quit): \n";
	}
	cout << "Done\n";

	return 0;
}
