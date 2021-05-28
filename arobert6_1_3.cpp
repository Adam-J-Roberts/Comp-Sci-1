#include <iostream>
using namespace std;

int main()
{

	int n1;
	int n2;



	cout << endl << "Please enter two whole numbers with a space between them (n1 n2): ";
	cin >> n1 >> n2;
	
	if (n1 % n2 == 0)
	{
		cout << n1 << " is divisible by " << n2 << endl << endl;
	}
	else
	{
		cout << n1 << " is not divisible by " << n2 << endl << endl;
	}

	


	return 0; 
}