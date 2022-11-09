#ifndef __STONEWT_H__
#define __STONEWT_H__

#include <iostream>

class Stonewt
{
	public:
		enum Type{STONE, POUNDS, FLOATPOUNDS};

	private:
		enum{Lbs_per_stn = 14};
		int stone;
		double pds_left;
		double pounds;
		Type type;
	public:
		Stonewt(double lbs);
		Stonewt(int stn, double lbs);
		Stonewt();

		void Set_Type(Type m);
		Stonewt operator+(const Stonewt &s) const;
		Stonewt operator-(const Stonewt &s) const;
		Stonewt operator*(double n) const;

		friend std::ostream &operator<<(std::ostream &os, const Stonewt &s);
};

#endif
