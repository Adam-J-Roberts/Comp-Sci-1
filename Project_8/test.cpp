#include <iostream>
#include <string>
#include <fstream>
#include <sstream>


using namespace std;

string convert (char conv);
void print_all(string output[100], int counter);

int main()
{
	string str;
	char test;
	string intake;
	string finished;
	int i = 0;
	int j = 0;
	int cycles;
	string output[100];

	cout << "how many times would you like to do this?" << endl;
	cin >> cycles;
	cin.ignore();
	stringstream ss;
	do{
		cout << "What would you like to translate to t9?" << endl; 
		ss >> str;
				
		do{
			intake = convert (str[i]);
			if (finished.back() == intake.front())
			{
				finished = finished + ' ';	
			}
			finished = finished + intake;
			if(str[i] == str[i+1])
			{
				finished = finished + ' ';
			}
			
			++i;
			
		}while (i < str.length());
		
		cout << finished << endl;

	
	return 0;
}

string convert (char conv)
{
	if (conv == 'a'){return "2";}
	if (conv == 'b'){return "22";}
	if (conv == 'c'){return "222";}
	if (conv == 'd'){return "3";}	
	if (conv == 'e'){return "33";}	
	if (conv == 'f'){return "333";}
	if (conv == 'g'){return "4";}	
	if (conv == 'h'){return "44";}
	if (conv == 'i'){return "444";}
	if (conv == 'j'){return "5";}
	if (conv == 'k'){return "55";}
	if (conv == 'l'){return "555";}
	if (conv == 'm'){return "6";}
	if (conv == 'n'){return "66";}
	if (conv == 'o'){return "666";}
	if (conv == 'p'){return "7";}	
	if (conv == 'q'){return "77";}
	if (conv == 'r'){return "777";}
	if (conv == 's'){return "7777";}
	if (conv == 't'){return "8";}
	if (conv == 'x'){return "99";}
	if (conv == 'y'){return "999";;}
	if (conv == 'u'){return "88";}
	if (conv == 'v'){return "888";}
	if (conv == 'w'){return "9";}
	if (conv == 'z'){return "9999";}
	if (conv == ' '){return "0";}

return "Oooops";
}
