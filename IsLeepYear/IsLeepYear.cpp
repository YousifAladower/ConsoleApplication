#include <iostream>
#include <string>
using namespace std;

//Get leap Year 
bool IsLeapYear(short year)
{
	return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int main()
{
	int year;
	cout << "Enter Year: ";
	cin >> year;
	if (IsLeapYear(year))
	{
		cout << year << " is a leap year." << endl;
	}
	else
	{
		cout << year << " is not a leap year." << endl;
	}
	system("pause>0");
	///yosufi falkadu askdfj adskjf 
	return 0;
}