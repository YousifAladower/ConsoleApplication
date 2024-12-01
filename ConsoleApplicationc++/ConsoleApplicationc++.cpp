// ConsoleApplicationc++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Source.cpp"

using namespace std;

enum enNumberTpe{Odd=1,Even=2};
int ReadNumber()
{
	int num;
	cout << "please enter number\n";
	cin >> num;
	return num;
}
enNumberTpe CheckNumber(int num)
{
    if(num%2==0)
	{
		return Even;
	}
	else
	{
		return Odd;
	}
}
void printTypeNumber(int numaType)
{
    if(numaType==Odd)
	{
		cout<<"Odd";
	}
	else
	{
		cout<<"Even";
	}
}

infoP ReadInfo()
{
	infoP info;
	cout << "please enter age\n";
	cin >> info.age;
	cout << "please enter licesson\n";
	cin >> info.hasDrivenLesssion;
	return info;
}
bool isAccepted(infoP info)
{
	return (info.age>18 && info.hasDrivenLesssion);
}
void printInfo(infoP info)
{
	if(isAccepted(info))
	{
		cout<<"accepted";
	}
	else
	{
		cout<<"not accepted";
	}
}

void printHaf(int num)
{
	string result ="half number"+to_string(num)+" "+"is :-"+to_string(num/2);
	cout<<result;
}

void ReadMark(int& num1, int& num2, int& num3)
{
	cout<<"please enter mark1\n"	;
	cin>> num1;
	cout<<"please enter mark2\n"	;
	cin>> num2;
	cout<<"please enter mark3\n"	;
	cin>> num3;
}
void ReadNumbers(int& num1, int& num2, int& num3)
{
	cout<<"please enter mark1\n"	;
	cin>> num1;
	cout<<"please enter mark2\n"	;
	cin>> num2;
	cout<<"please enter mark3\n"	;
	cin>> num3;
}

enum  enPassFaild{pass=1,fail=2};
bool checkpass(float average)
{
	if(average>=50)
	{
		return enPassFaild::pass;
	}
	else
	{
		return enPassFaild::fail;
	}
}
int SumOf3Number(int num1, int num2, int num3)
{
	return num1+num2+num3;
}
float AverageOf3Number(int num1, int num2, int num3)
{
	return (num1+num2+num3)/3;
}
void printMark(int num1, int num2, int num3)
{
     cout<<"sum of mark is"<<SumOf3Number(num1,num2,num3)<<endl;
	cout<<"average of mark is"<<AverageOf3Number(num1,num2,num3)<<endl;
	if(checkpass(AverageOf3Number(num1,num2,num3))== enPassFaild::pass)
	{
		cout<<"pass";
	}
	else
	{
		cout<<"fail";
	}
}


int Max3Numbers(int num1, int num2, int num3)
{
	if(num1>num2 && num1>num3)
	{
		return num1;
	}
	else if(num2>num1 && num2>num3)
	{
		return num2;
	}
	else
	{
		return num3;
	}
}
void printMax(int Max)
{
	cout<<"max number is"<<Max;
}

float ReadNumber(float& num)
{
	cout<<"please enter number\n";
	cin>>num;
	return num;
}
float calculateCircleArea(float radius)
{
	return (pow(radius,2) /(4* 3.14) );
}
void printAreaOfCircle(float radius)
{
	cout<<"area of circle is"<<calculateCircleArea(radius);
}
//int ReadPostiveNumber(int& num)
//{
//
//	do 
//	{
//		cout<<"please enter postive number\n";
//		cin>>num;
//		if(num<0)
//		{
//			cout<<"please enter postive number\n";
//		}
//		
//
//	}while(num<0);
//	return num;
//}

int ReadPostiveNumber(string Message)
{
	int num;
	do
	{
		cout << Message;
		cin >> num;
		if (num < 0)
		{
			cout << "please enter postive number\n";
		}


	} while (num < 0);
	return num;
}
int calculatefactorial(int num)
{
	int fact=1;
	for(int i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int readPower()
{
	int power;
	cout<<"please enter power\n";
	cin>>power;
	return power;
}
int readNumber()
{
	int num;
	cout<<"please enter number\n";
	cin>>num;
	return num;
}
int calculatePower(int num, int power)
{
	if (power == 0)
	{
		return 1;
	}
	int result=1;
	for(int i=1;i<=power;i++)
	{
		result=result*num;
	}
	return result;
}
float readTotalsall()
{
	float total;
	cout<<"please enter total\n";
	cin>>total;
	return total;
}
float readCominssion(float totalSall)
{
	if(totalSall<10000)
		return 0.05;
	else
		return 0.1;
}
float calculateCominssion(float totalSall)
{
	return totalSall*readCominssion(totalSall);
}

enum  enOperationType
{
	Add='+',subSract ='-',Multiply='*', Divide='/'
};
float ReadNumber(string Message)
{
	float Number;
	cout << Message;
	cin >> Number;
	return Number;
}
enOperationType ReadOperation()
{
	char OT = '+';
	cout << "please enter opertation?  \n";
   cin >> OT;
	return (enOperationType)OT;
}
float calculate(float num1, float num2, enOperationType OT)
{
	if (OT == enOperationType::Add)
	{
		return num1 + num2;
	}
	else if (OT == enOperationType::subSract)
	{
		return num1 - num2;
	}
	else if (OT == enOperationType::Multiply)
	{
		return num1 * num2;
	}
	else
	{
		return num1 / num2;
	}
}
float HourToDays(float hour)
{
	return hour / 24;
}
float HourToWeeks(float hour)
{
	return hour / 24 / 7;
}
float DaysToWeeks(float days)
{
	return days / 7;
}

struct StrTaskDuration
{
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};
StrTaskDuration ReadTaskDuration()
{
	StrTaskDuration TD;
    TD.NumberOfDays = ReadPostiveNumber("please enter number of days\n");
	TD.NumberOfHours = ReadPostiveNumber("please enter number of hours\n");
	TD.NumberOfMinutes = ReadPostiveNumber("please enter number of minutes\n");
	TD.NumberOfSeconds = ReadPostiveNumber("please enter number of seconds\n");
	return TD;
}
float calculateTaskDuration(StrTaskDuration TD)
{
	return TD.NumberOfDays * 24 * 60 * 60 + TD.NumberOfHours * 60 * 60 + TD.NumberOfMinutes * 60 + TD.NumberOfSeconds;
}

StrTaskDuration SecondsToTaskDuration(int TotalSecond)
{
	StrTaskDuration TD;
	const int SecondPerDay = 24 * 60 * 60;
	const int SecondPerHour = 60 * 60;
	const int SecondPerMinute = 60;

	TD.NumberOfDays = TotalSecond / SecondPerDay;
	TD.NumberOfHours = (TotalSecond % SecondPerDay) / SecondPerHour;
	TD.NumberOfMinutes = ((TotalSecond % SecondPerDay) % SecondPerHour) / SecondPerMinute;
	TD.NumberOfSeconds = ((TotalSecond % SecondPerDay) % SecondPerHour) % SecondPerMinute;

	return TD;

}

int main()
{

	int TotalSecond = ReadPostiveNumber("please enter number of seconds\n");

	StrTaskDuration TD = SecondsToTaskDuration(TotalSecond);
	cout<<"\n";
	cout <<  TD.NumberOfDays <<":"
	 <<TD.NumberOfHours << ":"
		<< TD.NumberOfMinutes << ":"
	 << TD.NumberOfSeconds << "\n";


	//cout << "total duration is" << calculateTaskDuration(ReadTaskDuration()) << endl;



	//float hour;
	//ReadNumber(hour);
	//float day = HourToDays(hour);
	//float week = HourToWeeks(hour);
	//float weeks = DaysToWeeks(day);
	//cout << "hour to days is " << day << endl;
	//cout << "hour to weeks is " << week << endl;
	//cout << "days to weeks is " << weeks << endl;

	/*int num1, num2, num3;
	num1 = ReadNumber("enter number1\n");
	num2 = ReadNumber("enter number2\n");
	 cout<<"result is"<< calculate(num1, num2, ReadOperation());*/

	//float total = readTotalsall();
	//cout<<"comission is"<<calculateCominssion(total);


	//cout<<"power of number is"<<calculatePower(readNumber(),readPower());



	//int num;
	//ReadPostiveNumber(num);
	//cout<<"factorial of number is"<<calculatefactorial(num);

	/*float l;
	ReadNumber(l);
	printAreaOfCircle(l);*/


	/* int num1, num2, num3;
	 ReadNumbers(num1, num2, num3);
	 printMax(Max3Numbers(num1, num2, num3));*/

	//int num1,num2,num3;
 //     ReadMark(num1,num2,num3);
	//printMark(num1,num2,num3);

	//printHaf(ReadNumber());
	//printInfo(ReadInfo());

	//printTypeNumber(CheckNumber(ReadNumber(	)));

   /* string name;
    string age;
    cout << "enter Your name!\n";
    cin >> name;
    getline(cin, name);
    cout << "enter Your age!\n";
    getline(cin, age);

    cout<<"hello"<<name<<" your age is "<<age<<endl;*/
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
