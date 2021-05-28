#include <iostream>
using namespace std;

int main()
{

	double n1;


	cout << endl << "Welcome to the temperature checking program!" << endl << endl << "Please enter a temperature in F: ";
	cin >> n1;
	
	if (n1 < 32)
	{
		cout << endl << "Brrr, it's below freezing!" << endl << endl;
	}
	else if (n1 > 95)
	{
		cout << endl << "Blistering, head indoors!" << endl << endl;
	}
	else
	{
		cout << endl << "Enjoy the day, perfect temperature." << endl << endl;
	}
	

	return 0;
}