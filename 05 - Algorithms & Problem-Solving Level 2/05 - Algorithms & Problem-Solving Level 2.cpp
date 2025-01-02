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
int GetReverseDigits(int num)
{
	int Remaind = 0;
	int rev = 0;
	while (num > 0)
	{
		Remaind = num % 10;
		num = num / 10;
		rev = rev * 10 + Remaind;
	}
	return rev;
}
int GetFrequentlyTimesForDigits(int num2,int num)
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
	return count;
}
void GetEveryDigitsFrequentlyTimes(int num)
{
	int Remaind = 0;
	int count = 0;
	int temp = num;
	for (int i = 0; i < 10; i++)
	{
		short FrequentTime = 0;
		 FrequentTime = GetFrequentlyTimesForDigits(i, num);
		 if (FrequentTime > 0)
		 {
			 cout << "frequently times for digits is :" << i << " is : " << FrequentTime<<"\n";
		 }
	}
	/*while (num > 0)
	{
		Remaind = num % 10;
		num = num / 10;
		count = 0;
		int num2 = temp;
		while (num2 > 0)
		{
			if (Remaind == num2 % 10)
			{
				count++;
			}
			num2 = num2 / 10;
		}
		cout << "frequently times for digits is :" << Remaind << " is : "<< count;
	}*/
}

void GetPalendromeDigits(int num)
{
	int ReversNumber = GetReverseDigits(num);
	if (num == ReversNumber)
	{
		cout << "this number is palindrome";
	}
	else
	{
		cout << "this number is not palindrome";
	}
}

void GetInvertedNumber(int num)
{
	//for(int i = num; i > 0; i--)
	//{
	//	int rev = 0;
	//	for (int j = 0; j < i; j++)
	//	{
	//		rev = rev * 10 + i;
	//	}
	//	cout << rev<<"\n";
	//}

	for (int i = num; i > 0; i++)
	{
		
		for (int j = 0; j < i; j++)
		{
			cout << i  ;
		}
		cout <<  "\n";
	}
}

void GetNumberPattern(int num)
{

	for (int i = 1; i <= num; i++)
	{

		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << "\n";
	}
}

string ReadLetters(string Message)
{
	string str;
	cout << Message;
	cin >> str;
	return str;
}

string Encryption(string str, int key)
{

	for (int i = 0; i < str.length(); i++)
	{
		str[i] = str[i] + key;
	}
	return str;

}
string Decryption(string str, int key)
{

	for (int i = 0; i < str.length(); i++)
	{
		str[i] = str[i] - key;
	}
	return str;
}

void printRandom3NumberFrom1to100()
{

	
	for (int i = 0; i < 3; i++)
	{
		cout << rand() % 100 + 1 << " ";
	}
}

int RandomNumber(int min, int max)
{
	int nu= (max - min + 1) + min;
	int randd= rand() % (max - min + 1) + min;
	return randd;
}

string GetRandom5LetterString()
{
	string str(5, ' ');
	for (int i = 0; i < 5; i++)
	{
		str[i] = 'A' + rand() % 26;
	}
	return str;
}
string GeneratRandomString(int length)
{
	string str(length, ' ');
	for (int i = 0; i < length; i++)
	{
		str[i] = 'A' + rand() % 26;
	}
	return str;
}
string GeneratKey(int length)
{
	string key = "";
	key= GeneratRandomString(length)+"-"+GeneratRandomString(length)+"-" + GeneratRandomString(length)+"-" + GeneratRandomString(length);
	return key;
}
void GenerateKeys(int num)
{
	for (int i = 0; i < 10; i++)
	{
		cout<<"["<<i+1<<"]::";
		cout << GeneratKey(num) << "\n";
	}
}

void ReadNumberOfArrayEntryByUser()
{
	int num;
	cout << "Enter number of array entry: ";
	cin >> num;
	int* arr = new int[num];
	for (int i = 0; i < num; i++)
	{
		cout << "Enter number " << i + 1 << " : ";
		cin >> arr[i];
	}
	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << " ";
	}
	cout <<"\n" << "Enter number of array you want to check how many time it repeated: ";
	int num2;
	cin >> num2;
	int count = 0;
	for (int i = 0; i < num; i++)
	{
		if (arr[i] == num2)
		{
			count++;
		}
	}
	cout << "Number " << num2 << " repeated " << count << " times";
	//delete[] arr;
}
void ReadArray(int arr[100], int& LengthArray)
{
	cout << "\nEnter number of array entry: \n";
	cin >> LengthArray;
	cout << "Enter array elements: \n";
    for (int i = 0; i < LengthArray; i++)
	{
		cout << "Enter number [ " << i + 1 << " ] " << " : ";
		cin >> arr[i];
	}
	cout << endl;

}
void printArray(int arr[100], int LengthArray) {

	cout << "array length :" << LengthArray;
	cout << "\n";
	for (int i = 0; i < LengthArray; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int timeReapeted(int arr[100], int LengthArray, int checkNumber)
{
	int count = 0;
	for (int i = 0; i < LengthArray; i++)
	{
		if (arr[i] == checkNumber)
		{
			count++;
		}
	}
	return count;
}
void printRandomArray(int arr[100], int& LengthArray)
{
	cout << "Enter number of array entry: \n";
	cin >> LengthArray;
	int randomNumber = 0;
	for (int i = 0; i < LengthArray; i++)
	{
		randomNumber = rand() % 100 + 1;
		arr[i] = randomNumber;
		cout << arr[i] << " ";
	}
	cout << endl;
}

int GetMaxNumberOfArray(int arr[100], int LengthArray)
{
	int max = arr[0];
	for (int i = 1; i < LengthArray; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int GetMinNumberOfArray(int arr[100], int LengthArray)
{
	int min = arr[0];
	for (int i = 1; i < LengthArray; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
int GetSumofArray(int arr[100], int LengthArray)
{
	int sum = 0;
	for (int i = 0; i < LengthArray; i++)
	{
		sum = sum + arr[i];
	}
	return sum;
}
double GetAverageofArray(int arr[100], int LengthArray)
{
	int sum = 0;
	for (int i = 0; i < LengthArray; i++)
	{
		sum = sum + arr[i];
	}
	return sum / LengthArray;
}
void printCopyFromPrintRandomArray(int arr1[100],int arr2[100], int LengthArray)
{
	//copy arr1 to arr2
	for (int i = 0; i < LengthArray; i++)
		arr2[i] = arr1[i];

}
enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };
enPrimeNotPrime CheckPrimeNumber(int num)
{
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			return NotPrime;
		}
	}
	return Prime;
}
void GetPrimeNumbers(int arr[100], int lenthArray)
{

	for(int i = 0; i < lenthArray; i++)
	{
		if (CheckPrimeNumber(arr[i]) == enPrimeNotPrime::Prime)
		{
			cout << arr[i] << " ";
		}
	}

}
void GetPrimeNumbers(int arr1[100], int arr2[100], int LengthArray ,int& LengthArray2)
{
	int counter = 0;
	LengthArray2=0;
	for (int i = 0;i < LengthArray;i++)
	{
		if(CheckPrimeNumber(arr1[i]) == enPrimeNotPrime::Prime)
		{
			arr2[counter] = arr1[i];
			counter++;
		}
	}
	LengthArray2 = --counter;
}
void GetSumofArrays(int arr1[100], int arr2[100], int arr3[100], int LengthArray)
{
	int sum = 0;
	for (int i = 0; i < LengthArray; i++)
	{
		arr3[i] = arr1[i] + arr2[i];
	}

}
void printArrayFrom(int arr[100], int& LengthArray)
{
	cout<<"inter array elements: \n";
	cin>>LengthArray;
	for (int i = 0; i < LengthArray; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void FillArrayFrom1ToN(int arr[100], int& LengthArray)
{
	cout << "inter array elements: \n";
	cin >> LengthArray;
	for (int i = 0; i < LengthArray; i++)
	{
		arr[i] = i + 1;
	}
}
void MixArray(int arr1[100],int arr2[100], int LengthArray)
{
	int mix = 0;

	for (int i = 0;i < LengthArray;i++)
	{
		mix = rand() % LengthArray+1;
		arr2[i] = mix;
	}
}
void Swap(int& num1, int& num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}
void ShuffleArray(int arr1[100], int LengthArray)
{
	for (int i = 0; i < LengthArray; i++)
	{
		Swap(arr1[RandomNumber(1, LengthArray)-1], arr1[RandomNumber(1, LengthArray)-1]);
	}

}
void CopyArrayByReverse(int arr1[100], int arr2[100], int LengthArray)
{
	for (int i = 0; i < LengthArray; i++)
	{
		arr2[i] = arr1[LengthArray - i - 1];
	}
}

void GenerateArray(int arr[100], int& LengthArray)
{
	cout << "Enter number of array entry: \n";
	cin >> LengthArray;
	for (int i = 0; i < LengthArray; i++)
	{
		arr[i] = i;
		cout << arr[i] <<"";
	}
	cout << endl;
}
void GenerateKeyInArray(int arr[100], int LengthArray)
{
	for (int i = 0; i < LengthArray; i++)
	{
		cout << arr[i] << " ::";
		cout << GeneratKey(LengthArray) << "\n";
	}
	cout << endl;
	
}
void GetMultipleFrom1to10(int from, int to)
{
	for (int i = from; i <= to; i++)
	{
		cout << i << " ";
	}
	cout<<"\n";
	for (int i = from; i <= to; i++)
	{
		cout <<  "--";
	}
	cout << "\n";
	for (int i = from; i <= to; i++)
	{
		cout<<i<<" | ";
		for (int j = from; j <= to; j++)
		{
			
			cout << i * j << " ";
		}
		cout << "\n";
	}
}

void AddElementToArray(int number, int arr2[100], int& LengthArray)
{
	LengthArray++;
	arr2[LengthArray - 1] = number;
}
void InputUserInArray(int arr[100], int& lengthArray)
{
	bool AddMore = true;
	do {
		
		AddElementToArray(ReadPostiveNumber("please enter positive number\n"), arr, lengthArray);
		cout << "Do you want to add more numbers:[0]No [1]Yes : \n";
		cin >> AddMore;
	} while (AddMore);
}
void GetRandomArray(int arr1[100], int arr2[100],int& LengthArray ,int& lengthArray2)
{
	cout << "Enter number of array entry: \n";
	cin >> LengthArray;
	int randomNumber = 0;
	for (int i = 0; i < LengthArray; i++)
	{
		randomNumber = rand() % 100 + 1;
		AddElementToArray(randomNumber, arr2, lengthArray2);
		arr1[i] = randomNumber;
		
		cout << arr1[i] << " ";
	}

	cout << endl;
}

void GetRandomArrayWithOdd(int arr1[100], int arr2[100], int& LengthArray, int& lengthArray2)
{
	cout << "Enter number of array entry: \n";
	cin >> LengthArray;
	int randomNumber = 0;
	for (int i = 0; i < LengthArray; i++)
	{
		randomNumber = rand() % 100 + 1;
		arr1[i] = randomNumber;
		if(arr1[i] %2!=0)
		AddElementToArray(arr1[i], arr2, lengthArray2);
		cout << arr1[i] << " ";
	}

	cout << endl;
}

void GetRandomArrayWithPrime(int arr1[100], int arr2[100], int& LengthArray, int& lengthArray2)
{
	cout << "Enter number of array entry: \n";
	cin >> LengthArray;
	int randomNumber = 0;
	for (int i = 0; i < LengthArray; i++)
	{
		randomNumber = rand() % 100 + 1;
		arr1[i] = randomNumber;
     if (CheckPrimeNumber(arr1[i]) == enPrimeNotPrime::Prime)
			AddElementToArray(arr1[i], arr2, lengthArray2);
		cout << arr1[i] << " ";
	}

	cout << endl;
}
void AddElementToArrayWithCheckIfExist(int number, int arr2[100], int& LengthArray)
{
	for (int i = 0; i < LengthArray; i++)
	{
		if (arr2[i] == number)
			return;
	}
	LengthArray++;
	arr2[LengthArray - 1] = number;
}
void GetDistinctArray(int arr1[100], int arr2[100], int& LengthArray, int& lengthArray2)
{
	for (int i = 0; i < LengthArray; i++)
	{
		AddElementToArrayWithCheckIfExist(arr1[i], arr2, lengthArray2);
		cout << arr1[i] << " ";
	}

}

void CheckArraypalindrome(int arr1[100], int LengthArray)
{
	for (int i = 0; i < LengthArray / 2; i++)
	{
		if (arr1[i] != arr1[LengthArray - i - 1])
		{
			cout << "not palindrome";
			return;
		}
	}
	cout << "palindrome";
}
void CheckArraypalindrome2(int arr1[100], int LengthArray)
{
	for (int i = 0; i < LengthArray / 2; i++)
	{
		if (arr1[i] != arr1[LengthArray - i - 1])
		{
			cout << "not palindrome";
			return;
		}
	}
	cout << "palindrome";
}
int main()
{
	srand(time(NULL));


	int arr1[10] = {1,2,3,4,2,2,1}; int LengthArray = 7;
	CheckArraypalindrome(arr1, LengthArray);

	

	//int arr1[10] = { 10,10,10,50,50,70,70,9,9,9 }; int LengthArray = 10;
 //       int arr2[100]; int lengthArray2 = 0;

	//	GetDistinctArray(arr1, arr2, LengthArray, lengthArray2);
	//cout << "\n array2 \n";
	//printArray(arr2, lengthArray2);


	/*int arr1[100]; int LengthArray; int arr2[100]; int lengthArray2 = 0;

	GetRandomArrayWithPrime(arr1, arr2, LengthArray , lengthArray2);
	cout<< "\n array2 \n";
	printArray(arr2, lengthArray2);*/

	//int arr1[100], LengthArray=0;
 //   InputUserInArray(arr1, LengthArray);
	//printArray(arr1, LengthArray);

	//GetMultipleFrom1to10(1, 10);


	/*int arr1[100] , LengthArray, checkNumber, arr2[100], LengthArray2 , arr3[100];

	GenerateArray(arr1, LengthArray);
	cout << "\n Copy Array of Reverse \n";
	GenerateKeyInArray(arr1,LengthArray);*/





	//int arr1[100], LengthArray, checkNumber, arr2[100], LengthArray2, arr3[100];

	//printRandomArray(arr1, LengthArray);
	//CopyArrayByReverse(arr1, arr2, LengthArray);

	//cout << "\n Copy Array of Reverse \n";
	//printArray(arr2, LengthArray);



	//int arr1[100], LengthArray, checkNumber, arr2[100], LengthArray2, arr3[100];

	//FillArrayFrom1ToN(arr1, LengthArray);
	//cout << "oraginal array \n";
	//printArray(arr1, LengthArray);
	//ShuffleArray(arr1, LengthArray);
	//cout << "\n Shuffle of arrays \n";
	//printArray(arr1, LengthArray);




	//int arr1[100], LengthArray, checkNumber, arr2[100], LengthArray2, arr3[100];

	//printRandomArray(arr1, LengthArray);
	//printRandomArray(arr2, LengthArray);
	//GetSumofArrays(arr1, arr2, arr3, LengthArray);
	//cout << "\n sum of arrays \n";
	//printArray(arr3, LengthArray);

	//int arr1[100]; int LengthArray; int checkNumber; int arr2[100]; int LengthArray2;
	//int arr3[3] = { 3,7,11 }; int LengthArray3 = 3;

	//cout << "\n prime Numbers \n";
	//GetPrimeNumbers(arr3, LengthArray3);
	//cout << "\n prime Numbers \n";

	//int arr1[100]; int LengthArray; int checkNumber; int arr2[100]; int LengthArray2;

	//printRandomArray(arr1, LengthArray);
	//GetPrimeNumbers(arr1, arr2, LengthArray , LengthArray2);
	//cout << "\n prime Numbers \n";
	//printArray(arr2, LengthArray2);

	/*int arr1[100]; int LengthArray; int checkNumber; int arr2[100];

	printRandomArray(arr1, LengthArray);
	printCopyFromPrintRandomArray(arr1, arr2, LengthArray);
	cout<< "\n copy from print random array \n";
	printArray(arr2, LengthArray);*/
	


	//cout << "Max number in array is : " << GetMaxNumberOfArray(arr, LengthArray) << "\n";
	//cout << "Min number in array is : " << GetMinNumberOfArray(arr, LengthArray) << "\n";
	//cout << "Sum of array is : " << GetSumofArray(arr, LengthArray) << "\n";
	//cout << "Average of array is : " << GetAverageofArray(arr, LengthArray) << "\n";

	//ReadArray(arr, LengthArray);
	//printArray(arr, LengthArray);
	//checkNumber = ReadPostiveNumber("Enter number of array you want to check how many time it repeated: ");
	//cout << "Number " << checkNumber << " repeated " << timeReapeted(arr, LengthArray, checkNumber) << " times\n";

	//ReadNumberOfArrayEntryByUser();

	//GenerateKeys(ReadPostiveNumber("Enter key number: "));


	/*cout << RandomNumber(1, 100)<<"\n";
	cout << RandomNumber(1, 100)<<"\n";
	cout << RandomNumber(1, 100)<<"\n";*/

	//printRandom3NumberFrom1to100();

	//string str = ReadLetters("Enter string: ");
	//int key = ReadPostiveNumber("Enter key: ");
	//string encryptedString = Encryption(str, key);

	//cout << "encrypted string is :" << encryptedString;

	//cout << "\ndecrypted string is :" << Decryption(encryptedString, key);

	//GetNumberPattern(ReadPostiveNumber("Enter positive number: "));

	//GetInvertedNumber(ReadPostiveNumber("Enter positive number: "));


	//GetPalendromeDigits(ReadPostiveNumber("Enter positive number: "));

	//printDigits(GetReverseDigits(ReadPostiveNumber("Enter positive number: ")));
	//GetEveryDigitsFrequentlyTimes(ReadPostiveNumber("Enter positive number: "));

	//GetFrequentlyTimesForDigits(ReadPostiveNumber("Enter the number you want to know Frequently: "),ReadPostiveNumber("Enter positive number: "));
	
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
