#include <iostream>
#include <fstream>
using namespace std;

void instructions()
{
	cout << "Enter the name of the output file, the year for which you wish to generate the calendar, and the day of the week that January is first on!\n";
	cout << endl;
	
}

char GetFileName()
{
	cout << "Enter the name of the output file:\n";
	char num{};
	std::cin >> num;

	return num;

}

int getyear()
{
	cout << "Enter the year for which you wish to generate the calendar:\n";
	int num{};
	std::cin >> num;

	return num;

}

int getday()
{
	cout << "Enter the day of the week that January is first on:\n";
	int num{};
	std::cin >> num;

	return num;

}

	bool is_leap(int a_year)
	{
	if (a_year % 4 == 0)
	{
		if (a_year % 100 == 0)
		{
			if (a_year % 400 == 0)
			{
				return true; 
			}
			else 
			{
				return false; 
			}

		}
		else
		{
			return true; 
		}
	}else{
		return false;

	}
	}

	int number_of_days_in_a_month(int a_month)
	{
		if (a_month == 0 || a_month == 2 || a_month == 4 || a_month == 7 || a_month == 9 || a_month == 11)
			return 31;
		else
			return 30;
	}


	string getMonthName(int monthNumber)
	{
		string months[] = { "January", "February", "March",
						   "April", "May", "June",
						   "July", "August", "September",
						   "October", "November", "December" };

		return(months[monthNumber]);
	}

	void printCalendar(int year, int iday, bool leap)
	{
		// prints calendar title
		std::cout << "           Calendar of " << year << std::endl;
		
		int days;

		int current = iday;

		// # of days in month, leap year accounted for.
		for (int i = 0; i < 12; i++)
		{
			days = number_of_days_in_a_month(i);
			if (i == 1 && leap == 1)
			{
				days = days - 1;
			}

			cout << endl;
			cout << "  " << getMonthName(i) << endl;
			
			// days of week
			cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n";
			int k;
			for (k = 0; k < current; k++)
				cout << ("     ");

			for (int j = 1; j <= days; j++)
			{
				if (j < 10)
				{
					std::cout << "  " << j << "  ";
				}
				else
				{
					std::cout << "  " << j << " ";
				}

				if (++k > 6)
				{
					k = 0;
					std::cout << "\n";
				}
			}

			if (k)
				std::cout << "\n";

			current = k;
		}

		return;
	}
				
	
	int main()
	{

		instructions();
		// getfilename();
		int year = getyear();
		int day = getday();
		//  is_leap(2200);
		printCalendar(year, day, is_leap(year));
	
		return 0;
	}

