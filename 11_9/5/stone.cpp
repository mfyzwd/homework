#include <iostream>
#include "stonewt.h"



int main(void)
{
    using namespace std;
	Stonewt incognito = 567;
	Stonewt wolfe(567.7);
	Stonewt taft(56, 7);

	incognito.Set_Type(Stonewt::POUNDS);
	cout << incognito;
	wolfe.Set_Type(Stonewt::FLOATPOUNDS);
	cout << wolfe;
	taft.Set_Type(Stonewt::STONE);
	cout << taft;

	taft = incognito + wolfe;
	taft.Set_Type(Stonewt::STONE);
	cout << "taft = " << taft << endl;

	taft = wolfe - incognito;
	taft.Set_Type(Stonewt::FLOATPOUNDS);
	cout << "taft = " << taft << endl;

	incognito = incognito * 2;
	incognito.Set_Type(Stonewt::POUNDS);
	cout << "incognito = " << incognito << endl;

	return 0;
}
