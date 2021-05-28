#include <iostream>
using namespace std;

int main()
{

	int a, s, q, d, n, p;
	string s1;
	string q1;
	string d1;
	string n1;
	string p1;

	s1 = "dollars";
	q1 = "quarters";
	d1 = "dimes";
	n1 = "nickles";
	p1 = "pennies";


	cout << endl << "Please enter how many cents you have.  ";
	cin >> a;
	s = a / 100;
	q = (a - (s * 100)) / 25;
	d = (a - (s * 100) - (q * 25)) / 10;
	n = (a - (s * 100) - (q * 25) - (d * 10)) / 5;
	p = a - (s * 100) - (q * 25) - (d * 10) - (n * 5);

	if (s == 1)
	{
		s1 = "dollar";
	}
	
	if (q == 1)
	{
		q1 = "quarter";
	}
	if (d == 1)
	{
		d1 = "dime";
	}
	if (n == 1)
	{
		n1 = "nickle";
	}
	if (p == 1)
	{
		p1 = "penny";
	}

						cout << "You should be getting back " << s << " " << s1 << ", " << q << " " << q1 << ", " << d << " " << d1 << ", " << n << " " << n1 << ", and " << p << " " << p1 << endl;



	return 0;
}