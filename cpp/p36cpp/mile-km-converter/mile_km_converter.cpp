#include "std_lib_facilities.h"

#define mile_unit 1.609

using namespace std;

int main()
{
	// const long double mile_unit = 1.609;

	long double user_mile;
	long double user_km;
	cout << "Enter the mile unit distance: " << endl;
	cin >> user_mile;

	[&user_km](long double m)
	{
		user_km = m * mile_unit;
	}(user_mile);

	cout << user_km << endl;

	cout << int{'c'} << endl;

	if (1 == 1)
		cout << "c" << endl;
	else
		cerr << "errer" << endl;
	return 0;
}
