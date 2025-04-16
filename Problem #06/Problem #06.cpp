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
void PrintSumAllMatrix(int arr[3][3], int rows, int cols)
{
	int sum = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum += arr[i][j];
		}
	}
	cout << "Sum of all matrix is: " << sum << endl;
}
bool IsIdentityMatrix(int arr[3][3], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i == j && arr[i][j] != 1)
				return false;
			else if (i != j && arr[i][j] != 0)
				return false;
		}
	}
	return true;
}
bool IsSparseMatrix(int arr[3][3], int rows, int cols)
{
	int zeroCount = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] == 0)
				zeroCount++;
		}
	}
	return zeroCount > (rows * cols) / 2;
}
bool IsNumberInMatrix(int arr[3][3], int rows, int cols, int number)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] == number)
				return true;
		}
	}
	return false;
}
int MaxNumberInMatrix(int arr[3][3], int rows, int cols)
{
	int maxNum = arr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] > maxNum)
				maxNum = arr[i][j];
		}
	}
	return maxNum;
}
int MinNumberInMatrix(int arr[3][3], int rows, int cols)
{
	int minNum = arr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] < minNum)
				minNum = arr[i][j];
		}
	}
	return minNum;
}
bool IsPalindromMatrix(int arr[3][3], int rows, int cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			if (arr[i][j] != arr[i][cols - 1 - j])
				return false;
		}
	}
	return true;
}
void PrintFibonacciUsingLoop(int n)
{
	int a = 0, b = 1, c;
	cout << a << " " << b << " ";
	for (int i = 1; i < n; i++)
	{
		c = a + b;
		cout << c << " ";
		a = b;
		b = c;
	}
	cout << endl;
}
int main()
{
	//Problem21
	int n = 10;
	cout << "Fibonacci series using loop: ";
	PrintFibonacciUsingLoop(n);

	//Problem20  Is palindrome array
	/*int arr[3][3] = { { 1, 2, 1 }, { 5, 5, 5 }, { 7,5, 7 } };
	PrintMatrix(arr, 3, 3);
	if (IsPalindromMatrix(arr, 3, 3))
	{
		cout << "The matrix is a palindrome matrix." << endl;
	}
	else
	{
		cout << "The matrix is not a palindrome matrix." << endl;
	}*/


	// Problem 12
	/*int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	cout << "MaxNumberInMatrix \n" << endl;
	cout << MaxNumberInMatrix(arr, 3, 3) << endl;
	cout << "MinNumberInMatrix \n" << endl;
	cout << MinNumberInMatrix(arr, 3, 3) << endl;*/

	//int arr[3][3] = { { 12, 0, 0 }, { 23, 12, 12 }, { 0, 0, 1 } };
	//if (IsSparseMatrix(arr, 3, 3))
	//{
	//	cout << "The matrix is a sparse matrix." << endl;
	//}
	//else
	//{
	//	cout << "The matrix is not a sparse matrix." << endl;
	//}

	/*int arr[3][3] = { { 1, 0, 0 }, { 0, 1, 0 }, { 0, 0, 1 } };
	if (IsIdentityMatrix(arr, 3, 3))
	{
		cout << "The matrix is an identity matrix." << endl;
	}
	else
	{
		cout << "The matrix is not an identity matrix." << endl;
	}*/


	/*int arr[3][3];
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
	cout << "\nSum of all elements in the first matrix:\n";
	PrintSumAllMatrix(arr, 3, 3);*/

	/*int arr[3][3];
	FillMatrix(arr, 3, 3);
	PrintMatrix(arr, 3, 3);
	cout << "Transposed Matrix:\n";
	PrintMatrixTransposed(arr, 3, 3);*/
	return 0;
    
}


