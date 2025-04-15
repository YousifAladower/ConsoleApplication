// Problem #06.cpp :make two dimensional array and fill it with order number and print it
//

#include <iostream>
using namespace std;
void FillMatrix(int arr[3][3], int rows, int cols)
{
	int num = 1;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = num++;
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

int main()
{
	int arr[3][3];
	FillMatrix(arr, 3, 3);
	PrintMatrix(arr, 3, 3);
	cout << "Transposed Matrix:\n";
	PrintMatrixTransposed(arr, 3, 3);
	return 0;
    
}


