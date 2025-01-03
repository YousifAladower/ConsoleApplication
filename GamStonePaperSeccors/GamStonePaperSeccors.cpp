// GamStonePaperSeccors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

short ReadHowManyRound()
{
	short num;
	cout << "Enter number of rounds: ";
	cin >> num;
	return num;

}
int GetRandomNumber(int min, int max)
{
	return rand() % (max - min + 1) + min;
}
int GetComputerRandomGamePalyer()
{
	return GetRandomNumber(1, 3);
}
//make game stone paper scissor
void StartGam()
{
	
	string agenGame="y";
	do {
		short num = ReadHowManyRound();
		int stone = 1, paper = 2, scissor = 3;
		int choose;
		int choosComputer;
		int count = 0;
		int countwinYou = 0;
		int countwinComputer = 0;
		int countDraw = 0;
		do	{
			cout << "Round " << count + 1 << " start: \n";
			cout << "Enter 1 for stone, 2 for paper, 3 for scissor: ";
			cin >> choose;
			choosComputer = GetComputerRandomGamePalyer();
			if (choose == choosComputer)
			{
				cout << "Computer choose: " << choosComputer << "\n";
				cout << "you      choose: " << choose << "\n";
				cout << "result:" << "Draw\n";
				countDraw++;
			}
			else if (choose == stone && choosComputer == scissor)
			{
				cout << "Computer choose: " << choosComputer << "\n";
				cout << "you choose: " << choose << "\n";
				cout << "result:" << "You win\n";
				countwinYou++;
				
			}
			else if (choose == paper && choosComputer == stone)
			{
				cout << "Computer choose: " << choosComputer << "\n";
				cout << "you choose: " << choose << "\n";
				cout << "result:" << "You win\n";
				countwinYou++;
			}
			else if (choose == scissor && choosComputer == paper)
			{
				cout << "Computer choose: " << choosComputer << "\n";
				cout << "you choose: " << choose << "\n";
				cout << "result:" << "You win\n";
				countwinYou++;
			}
			else
			{
				cout << "Computer choose: " << choosComputer << "\n";
				cout << "you choose: " << choose << "\n";
				cout << "result:" << "computer win\n";
				countwinComputer++;

			}
			cout << "\n";
			cout<<"----------------------------------------------------------------------------\n";
			count++;
		} while (count < num);
		cout << "Game Over\n";
		cout << "Game result: \n";
		cout << "You win : " << countwinYou << "\n";
		cout << "Computer win : " << countwinComputer << "\n";
		cout << "Draw : " << 0 << "\n";
		cout<< " the winor is " << (countwinYou == countwinComputer ? "Draw no winor" :(countwinYou > countwinComputer ? "you" : "computer")) << "\n";
		if (countwinYou > countwinComputer)
		{
			system("color 0A");
		}
		else if (countwinYou < countwinComputer)
		{
			system("color 0C");
		}
		else
		{
			system("color 0E");
		}

cout << "----------------------------------------------------------------------------\n";
		cout << "Do you want to play again? y/n: ";
		cin>>agenGame;
	} while (agenGame == "y");
	

}
int main()
{
	srand(time(NULL));
	StartGam();
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
