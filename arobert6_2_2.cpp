#include <iostream>
using namespace std;


int main()
{

	double time, min, cost;
	string day;
	string loop = "Y";

	cout << "Call Price Calculater" << endl;
	do {
		cout << "        Please enter day of call (Monday, Tuesday, etc.): ";
		cin >> day;
		cout << "        Please enter length of call (minutes): ";
		cin >> min;
		cout << "        Please enter call start time in 24-hour notation (0030, 2335, 1045, etc.): ";
		cin >> time;

		if (day == "Saturday" || "Sunday")
		{
			cost = min * .10;
			cout << "        The cost for that call is $" << cost << endl;
		}
		else
		{
			if (time > 800 || time < 1800)
			{
				cost = min * .25;
				cout << endl << "        The cost for that call is $" << cost << endl;
			}
			else
			{
				cost = min * .40;
				cout << "        The cost for that call is $" << cost << endl;
			}
		}
		cout << endl <<  "Would you like to compute another call (Y/N) ?";
		cin >> loop;

	
	} while (loop == "Y");
	return 0;
}
