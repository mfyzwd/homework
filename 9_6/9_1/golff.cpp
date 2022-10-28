#include <iostream>
#include "golf.h"

int main()
{
    using namespace std;
    golf p[2];
    int i=0;
    while(i<2){
        setgolf(p[i]);
        i++;
    }
    golf a;
    setgolf(a, "hello", 1);
    handicap(a, 2);
    showgolf(a);
    return 0;

}