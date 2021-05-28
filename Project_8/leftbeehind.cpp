#include <iostream>
#include <string>


using namespace std;


int main()
{

int good[15];
int sour[15];
int i = 0;
int j = 0;

		cout << "How many good jars and how many bad jars do you have?" << endl;
		
		do{
		cin >> good[i] >> sour[i];
		++i;
		}while (i < 15 && (good[i-1] != 0 || sour[i-1] != 0));
		
		do{
			if(good[j] + sour[j] == 13)
			{
				cout << "Never speak again." << endl;	
			}
			else if(good[j] > sour[j])
			{
				cout << "To the convention." << endl;
			}
			else if(good[j] < sour[j])
			{
				cout << "Left beehind." << endl;	
			}
			else if(good[j] = sour[j])
			{
				cout << "Undecided." << endl;	
			}
			++j;
		}while (j != i);

			
	return 0;
}
