#include <iostream>
using namespace std;
struct sDate
{
	short Year;
	short Month;
	short Day;
};
bool isLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}
short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 1 || Month>12)
		return 0;
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) :
		days[Month - 1];
}
short NumberOfDaysFromTheBeginingOfTheYear(short Day, short Month,short Year)
{
	short TotalDays = 0;
	for (int i = 1; i <= Month - 1; i++)
	{
		TotalDays += NumberOfDaysInAMonth(i, Year);
	}
	TotalDays += Day;
	return TotalDays;
}
sDate DateAddDays(short Days, sDate Date)
{
	short RemainingDays = Days +NumberOfDaysFromTheBeginingOfTheYear(Date.Day, Date.Month,Date.Year);
	short MonthDays = 0;
	Date.Month = 1;
	while (true)
	{
		MonthDays = NumberOfDaysInAMonth(Date.Month, Date.Year);
		if (RemainingDays > MonthDays)
		{
			RemainingDays -= MonthDays;
			Date.Month++;
			if (Date.Month > 12)
			{
				Date.Month = 1;
				Date.Year++;
			}
		}
		else
		{
			Date.Day = RemainingDays;
			break;
		}
	}
	return Date;
}
bool IsDate1BeforeDate2(sDate date1, sDate date2)  
{  
   if (date1.Year != date2.Year) return date1.Year < date2.Year;  
   if (date1.Month != date2.Month) return date1.Month < date2.Month;  
   return date1.Day < date2.Day;  
}
bool IsDate1EqualDate2(sDate date1, sDate date2)  
{  
   return (date1.Year == date2.Year && date1.Month == date2.Month && date1.Day == date2.Day);  
}
bool IsDayLastDayOfMonth(sDate date)
{
	return (date.Day == NumberOfDaysInAMonth(date.Month, date.Year));
}
bool IsMonthLastMonthOfYear(sDate date)
{
	return (date.Month == 12);
}
sDate IncreaseDateByOneDay(sDate date)
{
	sDate newDate = date;
	if (IsDayLastDayOfMonth(date))
	{
		newDate.Day = 1;
		if (IsMonthLastMonthOfYear(date))
		{
			newDate.Month = 1;
			newDate.Year++;
		}
		else
		{
			newDate.Month++;
		}
	}
	else
	{
		newDate.Day++;
	}
	return newDate;
}
short DiffirenteBetweenTwoDates(sDate date1, sDate date2)  
{  
   if (IsDate1EqualDate2(date1, date2))  
       return 0;  

   // Ensure date1 is always the earlier date  
   if (!IsDate1BeforeDate2(date1, date2))  
       std::swap(date1, date2);  

   short Days = 0;  
   while (!IsDate1EqualDate2(date1, date2))  
   {  
       Days++;  
       date1 = IncreaseDateByOneDay(date1);  
   }  
   return Days;  
}
short ReadDay()
{
	short Day;
	cout << "\nPlease enter a Day? ";
	cin >> Day;
	return Day;
}
short ReadMonth()
{
	short Month;
	cout << "\nPlease enter a Month? ";
	cin >> Month;
	return Month;
}
short ReadYear()
{
	short Year;
	cout << "\nPlease enter a Year? ";
	cin >> Year;
	return Year;
}
sDate ReadFullDate()
{
	sDate Date;
	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();
	return Date;
}
short ReadDaysToAdd()
{
	short Days;
	cout << "\nHow many days to add? ";
	cin >> Days;
	return Days;
}
int main()
{
	sDate Date1 = ReadFullDate();
	sDate Date2 = ReadFullDate();
	cout << "\n DiffirenteBetweenTwoDates:" << DiffirenteBetweenTwoDates(Date1, Date2);
	system("pause>0");
	return 0;



	//sDate Date = ReadFullDate();
	//sDate DateIncrese = IncreaseDateByOneDay(Date);
	//cout << "\n Date after Increase ";
	//cout << DateIncrese.Day << "/" << DateIncrese.Month << "/" << DateIncrese.Year;
	//system("pause>0");
	//return 0;




	/*sDate Date = ReadFullDate();
	short Days = ReadDaysToAdd();
	Date = DateAddDays(Days, Date);
	cout << "\nDate after adding [" << Days << "] days is: ";
	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;
	system("pause>0");
	return 0;*/
}