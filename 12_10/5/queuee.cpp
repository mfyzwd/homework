#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.h"
 
const int MIN_PER_HR = 60;
bool newcustomer(double x);
 
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;
 
    std::srand(std::time(0));
    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    Queue line(qs);
 
    cout << "The simulation hours: 100\n";
    int hours = 100;//实验时间为100
    long cyclelimit = MIN_PER_HR * hours;
 
    double perhour;
    double min_per_cust;
    perhour = 1;//
    Item temp;
    long turnaways = 0;
    long customers = 0;
    long served = 0;
    long sum_line = 0;
    int wait_time = 0;
    long line_wait = 0;
    double avetime = 0;//平均等候时间
    while (perhour<qs && avetime < 1)
    {
        
        while (!line.isempty())
        {
            line.dequeue(temp);
        }
        min_per_cust = MIN_PER_HR / perhour;
		
        for (int cycle = 0; cycle < cyclelimit; cycle++)
        {
            if (newcustomer(min_per_cust))
            {
                if (line.isfull())
                    turnaways++;
                else
                {
                    customers++;
                    temp.set(cycle);
                    line.enqueue(temp);
                }
            }
            if (wait_time <= 0 && !line.isempty())
            {
                line.dequeue(temp);
                wait_time = temp.ptime();
                line_wait += cycle - temp.when();
                served++;
            }
            if (wait_time > 0)
                wait_time--;
            sum_line += line.queuecount();
        }
        avetime = (double)line_wait / served;
        perhour++;
    }
    if (customers > 0)
        {
            cout << "customers accepted: " << customers << endl;
            cout << "  customers served: " << served << endl;
            cout << "         turnaways: " << turnaways << endl;
            cout << "average queue size: ";
            cout.precision(2);
            cout.setf(ios_base::fixed, ios_base::floatfield);
            cout << (double)sum_line / cyclelimit << endl;
            cout << " average wait time: " << (double)line_wait / served << " minutes\n";
            cout << "When there comes " << perhour << " people per hour, the average wait time will be about 1 minute.\n";
        }
        else
            cout << "No customers!\n";
    
 
    return 0;
}
 
bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1);
}

/*
Case Study: Bank of Heather Automatic Teller
Enter maximum size of queue: 23
The simulation hours: 100
customers accepted: 24989
  customers served: 24982
         turnaways: 0
average queue size: 3.14
 average wait time: 0.75 minutes
When there comes 23.00 people per hour, the average wait time will be about 1 minute.

*/
 