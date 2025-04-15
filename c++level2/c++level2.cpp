// c++level2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdio>
#include <vector>	
using namespace std;

void ReadNumber(vector <int>& number)
{
	char answer = 'y';
	int i = 0;
	while (answer == 'y' || answer == 'Y')
	{
		cout << "Enter number ! :";
		cin >> i;
		number.push_back(i);
		cout << "Do you want to enter another number? (y/n): ";
		cin >> answer;
	}
}
void PrintNumber(vector <int>& numbers)
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
	for (Student& student : students)
	{
		cout << "ID: " << student.id << endl;
		cout << "Name: " << student.name << endl;
		cout << "GPA: " << student.age << endl;
		cout << "------------------------" << endl;
	}
	cout << endl;
}
//void swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
struct Emp
{
	int id;
	string name;
	float salary;

};
int main()
{
	//String Object 

	string S1 = "My Name is Mohammed Abu-Hadhoud, I LoveProgramming.";
	//Prints the length of the string
	cout << S1.length() << endl;
	//Returns the letter at position 3
	cout << S1.at(3) << endl;
	//Adds @ProgrammingAdvices to the end of string
	S1.append(" @ProgrammingAdvices");
	cout << S1 << endl;
	//inserts Ali at position 7
	S1.insert(7, " Ali ");
	cout << S1 << endl;
	//Prints all the next 8 letters from position 16.
	cout << S1.substr(16, 8) << endl;
	//Adds one character to the end of the string
	S1.push_back('X');
	cout << S1 << endl;
	//Removes one character from the end of the string
	S1.pop_back();
	cout << S1 << endl;
	//Finds Ali in the string
	cout << S1.find("Ali") << endl;
	//Finds ali in the string
	cout << S1.find("ali") << endl;
	if (S1.find("ali") == S1.npos)
	{
		cout << "ali is not found";
	}
	//clears all string letters.
	S1.clear();
	cout << S1 << endl;




	//Pointer and Reference
	/*int num;
	cout << "Enter a number of grades students: ";
	cin >> num;

	float* p;
		p = new float[num];
	for (int i = 0; i < num; i++)
	{
		cout << "Enter grade of student " << i + 1 << ": ";
		cin >> * (p+i);
	}
	cout << "The grades of students are: " << endl;
	for (int i = 0; i < num; i++)
	{
		cout << "Grade of student " << i + 1 << ": " << p[i] << endl;
	}
	delete[] p;*/







	//Emp emp, * emp1;
	//emp.id = 1;
	//emp.name = "Ali";
	//emp.salary = 1000;
	//cout << "before change" << endl;
	//cout << "ID: " << emp.id << endl;
	//cout << "Name: " << emp.name << endl;
	//cout << "Salary: " << emp.salary << endl;
	//
	//emp1 = &emp;
	//cout << "after using Pointer" << endl;
	//emp1->id = 1;
	//emp1->name = "Ali";
	//emp1->salary = 1000;
	//cout << "ID: " << emp1->id << endl;
	//cout << "Name: " << emp1->name << endl;
	//cout << "Salary: " << emp1->salary << endl;






	/*int arr[5] = { 1,2,3,4,5 };
	int* p = arr;
	for (int i = 0; i < 5; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
		cout << "p[" << i << "] = " << *(p + i) << endl;
	}*/







	//int a = 10;
	//int b = 20;
	//cout << "Before swap: a = " << a << ", b = " << b << endl;
	//swap(a, b);
	//cout << "After swap: a = " << a << ", b = " << b << endl;






	/*int a = 10;
	int *b = &a;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "*b = " << *b << endl;*/

	//Vector
	/*vector<Student> students;
	ReadStudent(students);
	PrintStudent(students);*/


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

