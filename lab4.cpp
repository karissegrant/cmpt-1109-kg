#include <iostream>
using namespace std;

void instructions()
{
	cout << "Enter the name of the output file, the year for which you wish to generate the calendar, and the day of the week that January is first on!\n";
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







	
int main()
{
	instructions();
	cout << is_leap(1991);

	return 0;
}