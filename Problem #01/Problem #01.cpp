// Problem #01.cpp : random number  with matrix two dimensional array

#include <iostream>
using namespace std;

int GetRandomNumber(int min, int max)
{
	return rand() % (max - min + 1) + min;
}
void FillMatrixByRandomNumber(int arr[10][10], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = GetRandomNumber(1, 100);
		}
	}
}
void printMatrix(int arr[10][10], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void PrintSumEveryRow(int arr[10][10], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		int sum = 0;
		for (int j = 0; j < cols; j++)
		{
			sum += arr[i][j];
		}
		cout << "Sum of row " << i + 1 << " is: " << sum << endl;
	}
}
void PrintSumEveryRowWithFillToOneDimensionalArray(int arr[10][10], int rows, int cols,int arr2[10])
{
	for (int i = 0; i < rows; i++)
	{
		int sum = 0;
		for (int j = 0; j < cols; j++)
		{
			sum += arr[i][j];
		}
		cout << "Sum of row " << i + 1 << " is: " << sum << endl;
		arr2[i] = sum;
	}
}
void PrintArrayOneDimensional(int arr[10], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
int main()
{
	int arr[10][10];
	FillMatrixByRandomNumber(arr, 10, 10);
	printMatrix(arr, 10, 10);
	cout << "--------------------------------------------------------\n";
	PrintSumEveryRow(arr, 10, 10);
	cout << "--------------------------------------------------------\n";
	int arr2[10];
	PrintSumEveryRowWithFillToOneDimensionalArray(arr, 10, 10, arr2);
	cout << "--------------------------------------------------------\n";
	PrintArrayOneDimensional(arr2, 10);
	return 0;

}


