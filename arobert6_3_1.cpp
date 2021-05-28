#include <iostream>
#include <iomanip> 

using namespace std;

void pattern0(int rows);
void pattern1(int rows);
void pattern2(int rows);


int main()
{
	int rows;
	int pattern;
	
	cout << "Please enter how many rows you want" << endl;
	cin >> rows;
	cout << "Please enter which pattern you want?" << endl;
	cin >> pattern;

	if (pattern == 0)
	{
		pattern0(rows);
	}
	if (pattern == 1)
	{
		pattern1(rows);
	}
		if (pattern == 2)
	{
		pattern2(rows);
	}






	return 0;
}

void pattern0(int rows)
{
	for (int i = 1; i < rows+1; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
			
		}
		cout << endl;
	}
}

void pattern1(int rows)
{
	for (int i = 1; i < rows+1; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
			
		}
		cout << endl;
	}
	for (int i = rows; i != 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
			
		}
		cout << endl;
	}
}

void pattern2(int rows)
{
	for (int i = rows; i != 0; i--)
	{
		for (int k = rows-i; k > 0; k--)
		{
				cout << " ";
		}
		for (int j = 0; j < i; j++)
		{
			cout << "*";
			
		}
		cout << endl;
	}
	
}

