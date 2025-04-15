// Problem #06.cpp :make two dimensional array and fill it with order number and print it
//

#include <iostream>
using namespace std;
int GetRandomNumber(int min, int max)
{
	return rand() % (max - min + 1) + min;
}
void FillMatrix(int arr[3][3], int rows, int cols)
{
	int num = 1;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = GetRandomNumber(1,10);
		}
	}
}
void PrintMatrix(int arr[3][3], int rows, int cols)
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
void PrintMatrixTransposed(int arr[3][3], int rows, int cols)
{
	for (int i = 0; i < cols; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			cout << arr[j][i] << "\t";
		}
		cout << endl;
	}
}
void MultipleMatrix(int arr[3][3], int arr2[3][3], int arrReslt[3][3], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arrReslt[i][j] = 0;
			arrReslt[i][j] += arr[i][j] * arr2[i][j];
		}
	}
}
void PrintMidelRow(int arr[3][3], int rows, int cols)
{
	short middleRow = rows / 2;
	for (int i = 0; i < cols; i++)
	{
		printf("%0*d   ",2, arr[middleRow][i]);

	}
}
void PrintMidelColumn(int arr[3][3], int rows, int cols)
{
	short middleCol = cols / 2;
	for (int i = 0; i < rows; i++)
	{
		printf("%0*d   ", 2, arr[i][middleCol]);
	}
}
int main()
{
	int arr[3][3];
	int arr2[3][3];
	int arrReslt[3][3];
	FillMatrix(arr, 3, 3);
	FillMatrix(arr2, 3, 3);
	cout << "Matrix 1:\n";
	PrintMatrix(arr, 3, 3);
	cout << "Matrix 2:\n";
	PrintMatrix(arr2, 3, 3);
	cout << "Result of multiplication:\n";
	MultipleMatrix(arr, arr2, arrReslt, 3, 3);
	PrintMatrix(arrReslt, 3, 3);
	cout << "Middle row of the first matrix:\n";
	PrintMidelRow(arr, 3, 3);
	cout << "\nMiddle column of the first matrix:\n";
	PrintMidelColumn(arr, 3, 3);

	/*int arr[3][3];
	FillMatrix(arr, 3, 3);
	PrintMatrix(arr, 3, 3);
	cout << "Transposed Matrix:\n";
	PrintMatrixTransposed(arr, 3, 3);*/
	return 0;
    
}


