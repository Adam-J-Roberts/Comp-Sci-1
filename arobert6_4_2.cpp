#include <iostream>
using namespace std;


double f2m(double ft)
{
	double meters;
			meters = ft * 0.304;
		return meters;
}

double m2f(double m)
{
	double feet;

	feet = m / 0.304;
		return feet;
}


int main()
{

	double original, measurement;
	string conversion;


	cout << "Welcome, this program will convert feet to meters and meters to feet." << endl;
	cout << "Please select one." << endl;
	cout << "	1. Feet to meters." << endl;
	cout << "	2. Meters to feet." << endl;
	cin >> measurement;
		do {
			if (measurement == 1)
			{
				conversion = "feet";
			}

			else if (measurement == 2)
			{
				conversion = "meters";
			}
		} while (measurement != 1 && measurement != 2);

			cout << "How many " << conversion << " are we converting today? " << endl;
			cin >> original;

		if (measurement == 1)
			{
				measurement = f2m(original) ;
				conversion = "m";
			}
		else if (measurement == 2)
			{
				measurement = m2f(original);
				conversion = "ft";
			}

			cout << "You have " << measurement << conversion << endl;

	return 0;
}