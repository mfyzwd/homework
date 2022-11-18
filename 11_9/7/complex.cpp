#include "complex0.h"

complex::complex()
{
	real = imaginary = 0.0;
}

complex::complex(double r, double i)
{
	real = r;
	imaginary = i;
}

complex complex::operator+(const complex &c) const
{
	return complex(real+c.real, imaginary+c.imaginary);
}

complex complex::operator-(const complex &c) const
{
	return complex(real-c.real, imaginary-c.imaginary);
}

complex complex::operator*(complex &c) 
{
	return complex(real*c.real - imaginary*c.imaginary, real*c.imaginary + imaginary*c.real);
}

complex complex::operator~() const
{
	return complex(real, -imaginary);
}

complex operator*(double x, const complex &c)
{
	return complex(x*c.real, x*c.imaginary);
}

std::istream &operator>>(std::istream &is, complex &c)
{
	is >> c.real >> c.imaginary;
	return is;
}

std::ostream &operator<<(std::ostream &os, const complex &c)
{
	os << "(" << c.real << "," << c.imaginary << "i)";
	return os;
}
