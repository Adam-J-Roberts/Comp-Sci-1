#include <iostream>
#include <iomanip>

using namespace std;

int reverse(int num)
{
	int ones, tens, hundreds, numb, goal;

	numb = num;
	ones = numb % 10;
	numb = numb / 10;
	tens = numb % 10;
	numb = numb / 10;
	hundreds = numb % 10;


	goal = ((ones * 100) + (tens * 10) + hundreds);

		return goal;
}


int main()
{
	int numb, ones, tens, hundreds, goal1;

	cout << endl << "Please enter any 3 digit number, and I will spit them back at you reversed." << endl;
	cin >> numb;

	if (numb > 100 && numb < 1000)
	{
		goal1 = reverse(numb);
		cout << endl << "Your number reversed is " << setfill('0') << setw(3) << goal1 << " ."<< endl << endl;
	}
	else
		cout << "-1" << endl;
	
	
	
	
	

	return 0;
}