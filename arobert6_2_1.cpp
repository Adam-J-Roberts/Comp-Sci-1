#include <iostream>
using namespace std;

int main()
{

	double n, g, r, g1;
	
	cout << endl << "Babylonian Square Root Algorithm. \n       Please enter a positive non-zero number: ";
	cin >> n;
	g = n / 2;

	cout << endl << "        Computing the square root of " << n << " ... " << endl;
	cout << "                Initial Guess: " << g << endl;
	do {  
		r = n / g;
		g1 = (g + r) / 2.0;
	} while ((g1 > g + .01) && (g1 < g - .01));
		cout << "The square root of " << n << "is approximately" << g1 << endl;



	
		

	return 0; 
}