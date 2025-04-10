// c++level2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdio>
#include <vector>	
using namespace std;

void ReadNumber(vector <int> & number)
{
	char answer = 'y';
	int i = 0;
	while (answer == 'y'|| answer == 'Y')
	{
		cout << "Enter number ! :";
		cin >> i;
		number.push_back(i);
		cout << "Do you want to enter another number? (y/n): ";
		cin >> answer;
	}
}
void PrintNumber(vector <int> & numbers)
{
	for (int number : numbers)
	{
		cout << number << endl;
	}
	cout << endl;
}
struct Student
{
	int id;
	string name;
	float age;
};
void ReadStudent(vector <Student>& students)
{
	char answer = 'y';
	Student student;
	while (answer == 'y' || answer == 'Y')
	{
		cout << "Enter student id ! :";
		cin >> student.id;
		cout << "Enter student name ! :";
		cin >> student.name;
		cout << "Enter student age ! :";
		cin >> student.age;
		students.push_back(student);
		cout << "Do you want to enter another student? (y/n): ";
		cin >> answer;
	}
}
void PrintStudent(vector <Student>& students)
{
	for (Student & student : students)
	{
		cout << "ID: " << student.id << endl;
		cout << "Name: " << student.name << endl;
	    cout<< "GPA: " << student.age << endl;
		cout << "------------------------" << endl;
	}
	cout << endl;
}
int main()
{

	//Vector
	vector<Student> students;
	ReadStudent(students);
	PrintStudent(students);


	/*vector<int> numbers;
	ReadNumber(numbers);
	PrintNumber(numbers);*/



	////make app to multiply two numbers from 1 to 10 and sotre them in an two dimensional array
	//int arr[10][10];
	//for (int i = 0; i < 10; i++)
	//{
	//	for (int j = 0; j < 10; j++)
	//	{
	//		arr[i][j] = (i + 1) * (j + 1);
	//	}	
	//}

	////print the array using printf as 01 , 02, 03, 04, 05, 06, 07, 08, 09
	//for (int i = 0; i < 10; i++)
	//{
	//	for (int j = 0; j < 10; j++)
	//	{
	//		if (arr[i][j] < 10)
	//		{
	//			printf("0%d ", arr[i][j]);
	//		}
	//		else
	//		{
	//			printf("%d ", arr[i][j]);
	//		}
	//	}
	//	printf("\n");
	//}






   /* int d = 2;
	printf("int printf ==>  %d", d);
	printf("int printf ==>  %0*d",4, d);
	printf("\n");

	char c = 'A';
	float f = 2.5;
	float ff = 2.555, ff2 = 3.253;
	printf("float printf ==>  %f", f);
	printf("\n");
	printf("float printf ==>  %.*f",2, f);
	printf("float printf ==>  %.*f",3, f);
	printf("\n");
	printf("float printf ==>  %.3f : and %.5f", ff, ff2);*/

    
}

