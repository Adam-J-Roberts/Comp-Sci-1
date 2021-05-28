#include <iostream>
#include <string>

using namespace std;

void print_menu();
int input_choice();
char input_type();
int input_age();
double compute_rate();
void input_reservation(int f[], int g[], int h[], int j);
void print_all(int f[], int g[], int h[]);




int main()
{
	int choice;
	int	total;
	char type;
	int i = 0;
	int hang[100] = { 0 };
	int fly[100] = { 0 };
	int glide[100] = { 0 };


	do {

		choice = input_choice();
		if (choice == 1)
		{
			total = i + 1;
			input_reservation(fly, glide, hang, i);


			i++;
		}
		else if (choice == 2)
		{
			print_all(fly, glide, hang);
		}
		else if (choice == 3)
		{
			type = input_type();
			if (type == 'f' || type == 'F')
			{
				for (int j = 0; ; j++)//for (int j = 0; fly[j] < 1; j++) why no workie?? Nor does a do while
				{
					if (fly[j] <= 0)break;
					cout << "A patron aged " << fly[j] << " reserved a session of flying." << endl;

				}
			}
			else if (type == 'g' || type == 'G')
			{
				for (int j = 0; ; j++)
				{
					if (glide[j] <= 0)break;
					cout << "A patron aged " << glide[j] << " reserved a session of gliding." << endl;
				}
			}

			else if (type == 'h' || type == 'H')
			{
				for (int j = 0; ; j++)
				{
					if (hang[j] <= 0)break;
					cout << "A patron aged " << hang[j] << " reserved a session of hang-gliding." << endl;
				}
			}
		}
	} while (choice != 4);

	cout << "there were a total of " << total << " reservations." << endl;

	return 0;
}

void print_menu()
{
	cout << "Welcome to Dare-Devils Recreational Company!" << endl;
	cout << "We would be glad to help you make a reservation for your eventual death!!" << endl;
	cout << "Please pick from the follwoing menu." << endl;
	cout << "1. Add a new reservation" << endl;
	cout << "2. Print all reservations" << endl;
	cout << "3. Print all reservations for a given sport" << endl;
	cout << "4. Quit" << endl;
}

int input_choice()
{
	int choice;

	print_menu();
	do {
		cin >> choice;
	} while (choice > 0 && choice > 5);


	return choice;
}

char input_type()
{
	char sport;

	do {
		cout << "Please enter f/F for flying, g/G for gliding and h/H for hang-gliding" << endl;
		cin >> sport;
	} while (sport != 'f' && sport != 'F' && sport != 'g' && sport != 'G' && sport != 'h' && sport != 'H');


	return sport;
}

int input_age()
{
	int age;

	do {
		cout << "Please enter the age of the patron, minimum 16" << endl;
		cin >> age;

		if (age > 112)
		{
			cout << "Sorry, we can't accomodate civil war vets at this time." << endl;
		}
		else if (age < 16)
		{
			cout << "Even if I wanted to throw you out a plane, I'm not legally allowed." << endl;
		}
	} while (age < 16 && age > 111);

	return age;
}

double compute_rate(char x, int y)
{
	double cost;

	if (x == 'f' || x == 'F')
		if (y < 26)
		{
			cost = 68.95;
		}
		else
		{
			cost = 55.95;
		}
	else if (x == 'g' || x == 'G')
		if (y < 26)
		{
			cost = 73.95;
		}
		else
		{
			cost = 65.95;
		}
	else if (x == 'h' || x == 'H')
		if (y < 26)
		{
			cost = 99.95;
		}
		else
		{
			cost = 92.95;
		}



	return cost;
}

void input_reservation(int fly[], int glide[], int hang[], int i)
{
	int age, total;
	char type;

	type = input_type();

	if (type == 'f' || type == 'F')
	{
		age = input_age();
		fly[i] = age;
	}

	else if (type == 'g' || type == 'G')
	{
		age = input_age();
		glide[i] = age;
	}

	else if (type == 'h' || type == 'H')
	{
		age = input_age();
		hang[i] = age;
	}



	cout << "$" << compute_rate(type, age);

}
void print_all(int fly[], int glide[], int hang[])
{
	for (int j = 0; ; j++)
	{
		if (fly[j] <= 0)break;
		cout << "A patron aged " << fly[j] << " reserved a session of flying." << endl;

	}
	for (int j = 0; ; j++)
	{
		if (hang[j] <= 0)break;
		cout << "A patron aged " << hang[j] << " reserved a session of hang-gliding." << endl;
	}
	
	for (int j = 0; ; j++)
	{
		if (glide[j] <= 0)break;
		cout << "A patron aged " << glide[j] << " reserved a session of gliding." << endl;
	}

}