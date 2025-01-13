// ConsoleAppLib.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MyLib.h";
using namespace std;

int main()
{
    int number;

      cout<<"Enter a number: ";
     cin>>number;
     while(cin.fail())
	 {
		 cin.clear();
		 cin.ignore(std::abs(std::numeric_limits<std::streamsize>::max()), '\n');
		 cout<<"Error: Invalid input."<<endl;
		 cout<<"Enter a number: ";
		 cin>>number;
	 }
	 cout<<"Number: "<<number<<endl;



     //MyLib::test();
}


