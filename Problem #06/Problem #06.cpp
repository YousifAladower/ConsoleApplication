// Problem #06.cpp :make two dimensional array and fill it with order number and print it
//

#include <iostream>
#include <string>
#include <vector>	
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
int  MaxNumberInMatrix(int arr[3][3], int rows, int cols)
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
int  MinNumberInMatrix(int arr[3][3], int rows, int cols)
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
void PrintFibonacciUsingRecourse(int number, int perv1,int perv2)
{
	int FedNumber = 0;
	if (number > 0)
	{
		FedNumber = perv1 + perv2;
		cout << FedNumber << " ";
		perv2 = perv1;
		perv1 = FedNumber;
		PrintFibonacciUsingRecourse(number - 1, perv1, perv2);

	}

	
}
string ReadString()
{
	string str;
	cout << "Enter a string: ";
	getline(cin, str);
	return str;
}
void PrintFirstLetterFormEveryWorld(string S1)
{
	bool IsFirstLetter = true;
	for (int i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ' && IsFirstLetter)
		{
			cout << S1[i] << endl;
		}
		IsFirstLetter = (S1[i] == ' ') ? true : false;
	}
	
}
char ReadChar()
{
	char ch;
	cout << "Enter a character: ";
	cin >> ch;
	return ch;
}
char InvertLetterCaseChar(char a)
{
	return isupper(a)?tolower(a) : toupper(a);

}

void PrintEachWordSeparatedBySpace(string S1)
{
	for (int i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ')
		{
			cout << S1[i];
		}
		else
		{
			cout << endl;
		}
	}
}
//vector <string> SplitString(const string& str, char delimiter)
//{
//	vector<string> result;
//	string word;
//	
//	for (int i = 0; i < str.length(); i++)
//	{
//		if (str[i] != ' ')
//		{
//			word += str[i];
//		}
//		
//			result.push_back(word);
//			word.clear();	
//	}
//	return result;
//}
vector<string> SplitString(string S1, string Delim)
{
	vector<string> vString;
	short pos = 0;
	string sWord; // define a string variable
	// use find() function to get the position of the delimiters
	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); // store the word
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length()); /* erase() until
		positon and move to next word. */
	}
	if (S1 != "")
	{
		vString.push_back(S1); // it adds last word of the string.
	}
	return vString;
}
string SplitStringReverse(string S1, string Delim)
{
	vector<string> vString;
	string sWord; // define a string variable
	vString = SplitString(S1, Delim);
	vector<string> ::iterator iter = vString.end();
	while (iter != vString.begin())
	{
		iter--;
		sWord += *iter;
		if (iter != vString.begin()) // if not the last element
		{
			sWord += Delim;
		}
		
	}
	return sWord;
	
}
string TrimeLeftString(string S1)
{
	int i = 0;
	while (S1[i] == ' ')
	{
		i++;
	}
	return S1.substr(i);
}
string TrimeRightString(string S1)
{
	int i = S1.length() - 1;
	while (S1[i] == ' ')
	{
		i--;
	}
	return S1.substr(0, i + 1);
}
string TrimeString(string S1)
{
 return	TrimeLeftString(TrimeRightString(S1));
}

string JoinString(vector<string> vString, string Delim)
{
	string result;
	for (int i = 0; i < vString.size(); i++)
	{
		result += vString[i];
		if (i != vString.size() - 1)
		{
			result += Delim;
		}
	}
	return result;
}
string JoinString(string  arryString[], int length, string Delim)
{
	string result;
	for (int i = 0; i < length; i++)
	{
		result += arryString[i];
		if (i != length - 1)
		{
			result += Delim;
		}
	}
	return result;
}

//write comment to explane the function
string ReplaceWord(string S1, string wordReplace, string toReplace)
{
	string result;
	int pos = 0;
	while ((pos = S1.find(wordReplace)) != std::string::npos)
	{
		result += S1.substr(0, pos);// store the word
		result += toReplace;// add the word to replace
		S1.erase(0, pos + wordReplace.length()); // erase() until 
	}
	result += S1; // add the last part of the string
	return result; // return the result
}

int main()
{
	//Problem 42
	string s = "Weclome to Yemen , Yemen is a beautiful country";
	string wordReplace = "Yemen";
	string toReplace = "USA";
	cout << "string befor Replace:" << endl;
	cout << s << endl;
	cout << "string after Replace:" << endl;
	cout << ReplaceWord(s, wordReplace, toReplace) << endl;


	//Problem 41
	//cout << SplitStringReverse(ReadString(), " ") << endl;

	//Problem 39
	/*vector <string> vString = { "Hello", "World", "How", "Are", "You" };
	string arryString[5] = { "Hello", "World", "How", "Are", "You" };
	cout << JoinString(vString, ",") << endl;
	cout << JoinString(arryString, 5, ",") << endl;*/


	//Problem 38
	/*cout << TrimeLeftString(ReadString()) << endl;
	cout << TrimeRightString(ReadString()) << endl;
	cout << TrimeString(ReadString()) << endl;*/


	//problem36
	/*vector <string> vstring;
	vstring = SplitString("Hello World How Are You", " ");
	cout << vstring.size() << endl;
	for (string& s : vstring)
	{
		cout << s << endl;
	}*/


	//problem35
	//PrintEachWordSeparatedBySpace(ReadString());

	//Problem 27
	/*char c = ReadChar();
	cout << "char after Invert" << endl;
	cout << InvertLetterCaseChar(c);*/


	//Problem23
	//PrintFirstLetterFormEveryWorld(ReadString());





	////Problem22
	//int n = 10;
	//cout << "Fibonacci series using recursion: ";
	//PrintFibonacciUsingRecourse(n, 0, 1);

	



	//int n = 10;
	//cout << "Fibonacci series using loop: ";
	//PrintFibonacciUsingLoop(n);

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


