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
int main()
{
	printHaf(ReadNumber());
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
