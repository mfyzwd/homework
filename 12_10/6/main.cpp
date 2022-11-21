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
    while(qs<=1){
        cout << "Enter maximum size of queue,maximum>1: ";
        cin>>qs;
    }
    Queue line1(qs);
    Queue line2(qs);
 
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
    int wait_time1 = 0;
    int wait_time2 = 0;
    int line_size1 = 0;
    int line_size2 = 0;
    long line_wait = 0;
    double avetime = 0;//平均等候时间
    while (avetime < 1)
    {
        
        while (!line1.isempty())
        {
            line1.dequeue(temp);
        }
        while (!line2.isempty())
        {
            line2.dequeue(temp);
        }
        min_per_cust = MIN_PER_HR / perhour;
		
        for (int cycle = 0; cycle < cyclelimit; cycle++)
        {
            if (newcustomer(min_per_cust))
            {
                if (line1.isfull() && line2.isfull())
                    turnaways++;
                else if(line_size1 < line_size2)
                {
                    customers++;
                    temp.set(cycle);
                    line1.enqueue(temp);
                    line_size1++;
                }
                else
                {
                    customers++;
                    temp.set(cycle);
                    line2.enqueue(temp);
                    line_size2++;
                }

           }
            if (wait_time1 <= 0 && !line1.isempty())
            {
                line1.dequeue(temp);
                wait_time1 = temp.ptime();
                line_wait += cycle - temp.when();
                served++;
            }
            if (wait_time1 > 0)
                wait_time1--;
            sum_line += line1.queuecount();

            if (wait_time2 <= 0 && !line2.isempty())
            {
                line2.dequeue(temp);
                wait_time2 = temp.ptime();
                line_wait += cycle - temp.when();
                served++;
            }
            if (wait_time2 > 0)
                wait_time2--;
            sum_line += line2.queuecount();
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
customers accepted: 25334
  customers served: 25334
         turnaways: 0
average queue size: 0.11
 average wait time: 0.02 minutes
When there comes 23.00 people per hour, the average wait time will be about 1 minute.

*/
 