// 05 - Algorithms & Problem-Solving Level 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


int ReadPostiveNumber(string Message)
{
	int num;
	do
	{
		cout << Message;
		cin >> num;
		if (num < 0)
		{
			cout << "please enter positive number\n";
		}


	} while (num < 0);
	return num;
}
void printDigits(int num)
{
	int Remaind = 0;

	while (num > 0)
	{
		Remaind = num % 10;
		num = num / 10;
		cout << Remaind;
	}
}
void SumDigits(int num)
{
	int Remaind = 0;
	int sum = 0;
	while (num > 0)
	{
		Remaind = num % 10;
		num = num / 10;
		sum = sum + Remaind;
	}
	cout <<"sum of digits is :" << sum;
}
void GetReverseDigits(int num)
{
	int Remaind = 0;
	int rev = 0;
	while (num > 0)
	{
		Remaind = num % 10;
		num = num / 10;
		rev = rev * 10 + Remaind;
	}
	cout << "reverse of digits is :" << rev;
}
void GetFrequentlyTimesForDigits(int num2,int num)
{
	int Remaind = 0;
	int count = 0;
	while (num > 0)
	{
		Remaind = num % 10;
		num = num / 10;
		if (Remaind == num2)
		{
			count++;
		}
	}
	cout << "frequently times for digits is :" << count;
}
int main()
{


	GetFrequentlyTimesForDigits(ReadPostiveNumber("Enter the number you want to know Frequently: "),ReadPostiveNumber("Enter positive number: "));
	
	//GetReverseDigits(ReadPostiveNumber("Enter positive number: "));

	//SumDigits(ReadPostiveNumber("Enter positive number: "));
   //printDigits(ReadPostiveNumber("Enter positive number: "));
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
