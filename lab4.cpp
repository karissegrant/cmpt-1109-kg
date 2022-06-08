#include <iostream>
using namespace std;

//void instructions()
//{
//	cout << "Enter the name of the output file, the year for which you wish to generate the calendar, and the day of the week that January is first on! 004\n";
//	
//}
//
//char GetFileName()
//{
//	cout << "Enter the name of the output file:\n";
//	char num{};
//	std::cin >> num;
//
//	return num;
//
//}
//
//int GetYear()
//{
//	cout << "Enter the year for which you wish to generate the calendar:\n";
//	int num{};
//	std::cin >> num;
//
//	return num;
//
//}
//
//int GetDay()
//{
//	cout << "Enter the day of the week that January is first on:\n";
//	int num{};
//	std::cin >> num;
//
//	return num;
//
//}
//
//
//
//
//
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
		if (a_month == 1 || a_month == 3 || a_month == 5 || a_month == 8 || a_month == 10 || a_month == 12)
			return 31;
		else
			return 30;
	}




	
	int main()
	{
		/*instructions();
		getfilename();
		getyear();
		getday();*/
		/*cout << is_leap(2200);*/

		const int weeks = 5;
		const int days_per_weeks = 7;
		int arr[weeks][days_per_weeks];
		int day_of_month = 1;

		number_of_days_in_a_month(1);
		for (int i = 0; i < weeks; i++)
		{
			for (int j = 0; j < days_per_weeks && day_of_month <= number_of_days_in_a_month(1); j++)
			{
				arr[i][j] = day_of_month;
				day_of_month = day_of_month + 1;
			}
		}

		int counter = 1;
		for (int i = 0; i < weeks; i++)
		{
			for (int j = 0; j < days_per_weeks && counter <= number_of_days_in_a_month(1); j++)
			{
				cout << arr[i][j] << " ";
				counter++;
			}
		   cout << endl;
		}

			return 0;

	}

