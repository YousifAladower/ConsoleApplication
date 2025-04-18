// 08Problem #08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
bool isLeapYear(short Year)
{
	// if year is divisible by 4 AND not divisible by 100
	// OR if year is divisible by 400
	// then it is a leap year
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}
short DayOfWeekOrder(short Day, short Month, short Year)
{
	short a, y, m;
	a = (14 - Month) / 12;
	y = Year - a;
	m = Month + (12 * a) - 2;
	// Gregorian:
	//0:sun, 1:Mon, 2:Tue...etc
	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m)
		/ 12)) % 7;
}
string DayShortName(short DayOfWeekOrder)
{
	string arrDayNames[] = {
	"Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
	return arrDayNames[DayOfWeekOrder];
}
short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 1 || Month>12)
		return 0;
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) :days[Month - 1];
}
string MonthShortName(short MonthNumber)
{
	string Months[12] = { "Jan", "Feb", "Mar","Apr", "May", "Jun","Jul", "Aug", "Sep","Oct", "Nov", "Dec"};
	return (Months[MonthNumber - 1]);
}
void PrintMonthCalendar(short Month, short Year)
{
	int NumberOfDays;
	// Index of the day from 0 to 6
	int current = DayOfWeekOrder(1, Month, Year);
	NumberOfDays = NumberOfDaysInAMonth(Month, Year);
	// Print the current month name
	printf("\n _______________%s_______________\n\n",
		MonthShortName(Month).c_str());
	// Print the columns
	printf(" Sun Mon Tue Wed Thu Fri Sat\n");
	// Print appropriate spaces
	int i;
	for (i = 0; i < current; i++)
		printf(" ");
	for (int j = 1; j <= NumberOfDays; j++)
	{
		printf("%5d", j);
		if (++i == 7)
		{
			i = 0;
			printf("\n");
		}
	}
	printf("\n _________________________________\n");
}
void PrintYearCalendar(short Year)
{
	cout << "\n\n\t\t\tYear [" << Year << "] Calendar\n";
	for (int i = 1; i <= 12; i++)
	{
		PrintMonthCalendar(i, Year);
	}
}
short GetNumberOfDayFromBegingYear(short Day, short Month, short Year)
{
	short NumberOfDays = 0;
	for (int i = 1; i < Month; i++)
	{
		NumberOfDays += NumberOfDaysInAMonth(i, Year);
	}
	NumberOfDays += Day;
	return NumberOfDays;
}
short ReadDay()
{
	short Day;
	cout << "\nPlease enter a Day to check? ";
	cin >> Day;
	return Day;
}
short ReadMonth()
{
	short Month;
	cout << "\nPlease enter a Month to check? ";
	cin >> Month;
	return Month;
}
short ReadYear()
{
	short Year;
	cout << "\nPlease enter a year to check? ";
	cin >> Year;
	return Year;
}
int main()
{
	short year = ReadYear();
	short month = ReadMonth();
	short Day = ReadDay();
	GetNumberOfDayFromBegingYear(Day, month, year);

	//PrintMonthCalendar(month, year);
	//PrintYearCalendar(year);
	system("pause>0");
	return 0;
}
