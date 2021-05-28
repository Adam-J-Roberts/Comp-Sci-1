#include <iostream>
#include <stdlib.h> 

using namespace std;



int main()
{
	int random[1000];
	int y = 0;
	int j = 1;
	double dividend = 0;
	double divisor = 0;
	double dividend2, numeral, divisor2, quotient;

	srand(time(NULL));

	for (int i = 0; i < 1000; ++i) 
	{
		random[i] = rand() % 10 + 1;
	}
	
	do{
		dividend = dividend2 + random[y];
		dividend2 = dividend;
		y = y + 2;
	} while (y < 1000);

	for (int j = 1; j < 1000; j = j + 2)
	{
		divisor = divisor2 + random[j];
		divisor2 = divisor;
	}

		
		quotient = dividend / divisor;


		cout << dividend << " divided by " << divisor << " is " << quotient << endl << endl;

	return 0;
}