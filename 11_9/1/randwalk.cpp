/*测试指令 ： 100
			2
			q
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vector.h"
#include <fstream>


int main(void)
{
    using namespace std;
    using namespace VECTOR;

	double target;
	double dstep;
	Vector result(0.0, 0.0);
	double direction;
	Vector step;
	unsigned long steps = 0;

    ofstream fout;
    fout.open("1.txt");

	srand(time(NULL));

	cout << "Enter target distance(q to quit): ";
	while(cin >> target)
	{
		cout << "Enter the step lenght: ";
		if(!(cin >> dstep))
			break;
        fout<<"Target distancd : "<<target<<" , step size: "<<dstep<<endl;

		while(result.magval() < target)
		{
            fout<<step<<": (x,y) = "<<result<<endl;
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result += step;
			steps++;
		}

		cout << "After " << steps << " steps, the subject has the following location:\n";
		cout << result;

        fout << "After " << steps << " steps, the subject has the following location:\n";
		fout << result;

		result.polar_mode();
		cout << result;
        fout << result;

        fout<<"Average outward distance per step = "<<result.magval()/steps<<endl; //result.magval 一共走了多远 steps 一共多少步

		cout << endl;

		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance(q to quit): ";
	}
	cout << "Bye" << endl;
    cin.clear();
    while(cin.get() != '\n')
        continue;
	fout.close();   //关闭文件

	return 0;
}
