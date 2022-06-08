#include <iostream>
using namespace std;

void instructions()
{
	cout << "Enter the name of the output file, the year for which you wish to generate the calendar, and the day of the week that January is first on!\n";
}

void is_leap()
{
	int year;
	cout << "Enter to check if leap year" << endl;
	cin >> year;
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				cout << "It is a leap year!" << endl;
			}
			else
			{
				cout << "Not a leap year!" << endl;
			}
		}
		else
		{
			cout << "Leap year!" << endl;
		}

	}
	else
	{
		cout << "Not a leap year" << endl;
	}
}









	
int main()
{
	instructions();
	is_leap();

	return -1;
}