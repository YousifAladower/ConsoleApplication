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
short NumberOfDaysFromTheBeginingOfTheYear(short Day, short Month, short Year)
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
	short RemainingDays = Days + NumberOfDaysFromTheBeginingOfTheYear(Date.Day, Date.Month, Date.Year);
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
sDate IncreaseDateByDays(sDate date, short Days)
{
	sDate newDate = date;
	for (short i = 0; i < Days; i++)
	{
		newDate = IncreaseDateByOneDay(newDate);
	}
	return newDate;
}
sDate IncreaseDateByOneWeek(sDate date)
{
	sDate newDate = date;
	for (short i = 0; i < 7; i++)
	{
		newDate = IncreaseDateByOneDay(newDate);
	}
	return newDate;
}
sDate IncreaseDateByOneMonth(sDate date)
{
	sDate newDate = date;
	if (IsMonthLastMonthOfYear(date))
	{
		newDate.Month = 1;
		newDate.Year++;
	}
	else
	{
		newDate.Month++;
	}
	return newDate;
}
sDate IncreaseDateByXWeeks(sDate date, short Weeks)
{
	sDate newDate = date;
	for (short i = 0; i < Weeks * 7; i++)
	{
		newDate = IncreaseDateByOneDay(newDate);
	}
	return newDate;
}
sDate IncreaseDateByXMonths(sDate date, short Months)
{
	sDate newDate = date;
	for (short i = 0; i < Months; i++)
	{
		if (IsMonthLastMonthOfYear(newDate))
		{
			newDate.Month = 1;
			newDate.Year++;
		}
		else
		{
			newDate.Month++;
		}
	}
	return newDate;
}
sDate IncreaseDateByXYears(sDate date, short Years)
{
	sDate newDate = date;
	newDate.Year += Years;
	return newDate;
}
sDate IncreaseDateByXYearsFaster(sDate date, short Years)
{
	sDate newDate = date;
	newDate.Year += Years;
	if (date.Month == 2 && date.Day == 29 && !isLeapYear(newDate.Year))
	{
		newDate.Day = 28;
	}
	return newDate;
}
sDate IncreaseDateByOneDecade(sDate date)
{
	sDate newDate = date;
	newDate.Year += 10;
	if (date.Month == 2 && date.Day == 29 && !isLeapYear(newDate.Year))
	{
		newDate.Day = 28;
	}
	return newDate;
}
sDate IncreaseDateByXDecades(sDate date, short Decades)
{
	sDate newDate = date;
	newDate.Year += Decades * 10;
	if (date.Month == 2 && date.Day == 29 && !isLeapYear(newDate.Year))
	{
		newDate.Day = 28;
	}
	return newDate;
}
sDate IncreaseDateByXDecadesFaster(sDate date, short Decades)
{
	sDate newDate = date;
	newDate.Year += Decades * 10;
	if (date.Month == 2 && date.Day == 29 && !isLeapYear(newDate.Year))
	{
		newDate.Day = 28;
	}
	return newDate;
}
sDate IncreaseDateByOneCentury(sDate date)
{
	sDate newDate = date;
	newDate.Year += 100;
	if (date.Month == 2 && date.Day == 29 && !isLeapYear(newDate.Year))
	{
		newDate.Day = 28;
	}
	return newDate;
}
sDate IncreaseDateByXCenturies(sDate date, short Centuries)
{
	sDate newDate = date;
	newDate.Year += Centuries * 100;
	if (date.Month == 2 && date.Day == 29 && !isLeapYear(newDate.Year))
	{
		newDate.Day = 28;
	}
	return newDate;
}
sDate IncreaseDateByOneMillennium(sDate date)
{
	sDate newDate = date;
	newDate.Year += 1000;
	if (date.Month == 2 && date.Day == 29 && !isLeapYear(newDate.Year))
	{
		newDate.Day = 28;
	}
	return newDate;
}
sDate SubtractDateByOneDay(sDate date)
{
	sDate newDate = date;
	if (date.Day == 1)
	{
		if (date.Month == 1)
		{
			newDate.Month = 12;
			newDate.Year--;
			newDate.Day = NumberOfDaysInAMonth(newDate.Month, newDate.Year);
		}
		else
		{
			newDate.Month--;
			newDate.Day = NumberOfDaysInAMonth(newDate.Month, newDate.Year);
		}
	}
	else
	{
		newDate.Day--;
	}
	return newDate;
}
sDate SubtractDateByDays(sDate date, short Days)
{
	sDate newDate = date;
	for (short i = 0; i < Days; i++)
	{
		newDate = SubtractDateByOneDay(newDate);
	}
	return newDate;
}
sDate SubtractDateByOneWeek(sDate date)
{
	sDate newDate = date;
	for (short i = 0; i < 7; i++)
	{
		newDate = SubtractDateByOneDay(newDate);
	}
	return newDate;
}
sDate SubtractDateByXWeeks(sDate date, short Weeks)
{
	sDate newDate = date;
	for (short i = 0; i < Weeks * 7; i++)
	{
		newDate = SubtractDateByOneDay(newDate);
	}
	return newDate;
}
sDate SubtractDateByXMonths(sDate date, short Months)
{
	sDate newDate = date;
	for (short i = 0; i < Months; i++)
	{
		if (newDate.Month == 1)
		{
			newDate.Month = 12;
			newDate.Year--;
		}
		else
		{
			newDate.Month--;
		}
	}
	return newDate;
}
sDate SubtractDateByXYears(sDate date, short Years)
{
	sDate newDate = date;
	newDate.Year -= Years;
	return newDate;
}
sDate SubtractDateByXYearsFaster(sDate date, short Years)
{
	sDate newDate = date;
	newDate.Year -= Years;
	if (date.Month == 2 && date.Day == 29 && !isLeapYear(newDate.Year))
	{
		newDate.Day = 28;
	}
	return newDate;
}
sDate SubtractDateByXDecades(sDate date, short Decades)
{
	sDate newDate = date;
	newDate.Year -= Decades * 10;
	if (date.Month == 2 && date.Day == 29 && !isLeapYear(newDate.Year))
	{
		newDate.Day = 28;
	}
	return newDate;
}
sDate SubtractDateByXDecadesFaster(sDate date, short Decades)
{
	sDate newDate = date;
	newDate.Year -= Decades * 10;
	if (date.Month == 2 && date.Day == 29 && !isLeapYear(newDate.Year))
	{
		newDate.Day = 28;
	}
	return newDate;
}

sDate SubtractDateByOneCentury(sDate date)
{
	sDate newDate = date;
	newDate.Year -= 100;
	if (date.Month == 2 && date.Day == 29 && !isLeapYear(newDate.Year))
	{
		newDate.Day = 28;
	}
	return newDate;
}
sDate SubtractDateByXCenturies(sDate date, short Centuries)
{
	sDate newDate = date;
	newDate.Year -= Centuries * 100;
	if (date.Month == 2 && date.Day == 29 && !isLeapYear(newDate.Year))
	{
		newDate.Day = 28;
	}
	return newDate;
}
sDate SubtractDateByOneMillennium(sDate date)
{
	sDate newDate = date;
	newDate.Year -= 1000;
	if (date.Month == 2 && date.Day == 29 && !isLeapYear(newDate.Year))
	{
		newDate.Day = 28;
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
	sDate Date = ReadFullDate();
	cout << "\n After Increase Date By One Day: " << IncreaseDateByOneDay(Date).Day << "/" << IncreaseDateByOneDay(Date).Month << "/" << IncreaseDateByOneDay(Date).Year;

	cout << "\n After Increase Date By One Week: " << IncreaseDateByOneWeek(Date).Day << "/" << IncreaseDateByOneWeek(Date).Month << "/" << IncreaseDateByOneWeek(Date).Year;
	cout << "\n After Increase Date By One Month: " << IncreaseDateByOneMonth(Date).Day << "/" << IncreaseDateByOneMonth(Date).Month << "/" << IncreaseDateByOneMonth(Date).Year;
	cout << "\n After Increase Date By One Decade: " << IncreaseDateByOneDecade(Date).Day << "/" << IncreaseDateByOneDecade(Date).Month << "/" << IncreaseDateByOneDecade(Date).Year;
	cout << "\n After Increase Date By One Century: " << IncreaseDateByOneCentury(Date).Day << "/" << IncreaseDateByOneCentury(Date).Month << "/" << IncreaseDateByOneCentury(Date).Year;
	cout << "\n After Increase Date By One Millennium: " << IncreaseDateByOneMillennium(Date).Day << "/" << IncreaseDateByOneMillennium(Date).Month << "/" << IncreaseDateByOneMillennium(Date).Year;
	cout << "\n After Increase Date By X Days: " << IncreaseDateByDays(Date, 2).Day << "/" << IncreaseDateByDays(Date, 2).Month << "/" << IncreaseDateByDays(Date, 2).Year;
	cout << "\n After Increase Date By X Weeks: " << IncreaseDateByXWeeks(Date, 2).Day << "/" << IncreaseDateByXWeeks(Date, 2).Month << "/" << IncreaseDateByXWeeks(Date, 2).Year;
	cout << "\n After Increase Date By X Months: " << IncreaseDateByXMonths(Date, 2).Day << "/" << IncreaseDateByXMonths(Date, 2).Month << "/" << IncreaseDateByXMonths(Date, 2).Year;
	cout << "\n After Increase Date By X Years: " << IncreaseDateByXYears(Date, 2).Day << "/" << IncreaseDateByXYears(Date, 2).Month << "/" << IncreaseDateByXYears(Date, 2).Year;
	cout << "\n After Increase Date By X Decades: " << IncreaseDateByXDecades(Date, 2).Day << "/" << IncreaseDateByXDecades(Date, 2).Month << "/" << IncreaseDateByXDecades(Date, 2).Year;
	cout << "\n After Increase Date By X Centuries: " << IncreaseDateByXCenturies(Date, 2).Day << "/" << IncreaseDateByXCenturies(Date, 2).Month << "/" << IncreaseDateByXCenturies(Date, 2).Year;
	system("pause>0");
	return 0;

}