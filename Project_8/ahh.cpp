#include <iostream>
#include <string>


using namespace std;


int main()
{
string given;
string wanted;

		cout << "What does your doctor require? : ";
		cin >> wanted;
		cout << "Please say aah as long as you can. : ";
		cin >> given;
		
		if (given.length() >= wanted.length()) 
		{
			cout << "no" << endl;
		}
		else
		{
			cout << "go" << endl;
		}
			
	return 0;
}
