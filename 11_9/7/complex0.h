#ifndef _COMPLEX_0_H_
#define _COMPLEX_0_H_

#include <iostream>

class complex{
    private:
        double real;
        double imaginary;
    public:
        complex();
        complex(double a, double b);
        complex operator+(const complex &c) const;
        complex operator-(const complex &c) const;
        complex operator*(complex &c) ;
        complex operator~()const;

        friend complex operator*(double x, const complex &c);
		friend std::istream &operator>>(std::istream &is, complex &c);
		friend std::ostream &operator<<(std::ostream &os, const complex &c);
};

#endif