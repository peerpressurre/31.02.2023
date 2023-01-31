#pragma comment(lib, "winmm.lib")

#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include "MMsystem.h"

using namespace std;

int main()
{
	
	int c11, c12, u11, u12;
	char rules, var;
	srand(time(0));

	int csum = 0, usum = 0;
	cout << "Hello " << endl;
	Sleep(3000);
	cout << "And Welcome to the Dice" << endl;

	cout << "Press [ r ] for rules or [ p ] if you already know them ";
	cin >> rules;
	Sleep(500);
	system("cls");
	if (rules == 'r')
	{
		cout << "      So the rules are:" << endl;
		cout << "-----------------------------" << endl;
		cout << "|1.You play against computer |" << endl;
		cout << "|                            |" << endl;
		cout << "|2.When it's your turn       |" << endl;
		cout << "|  Press r to roll           |" << endl;
		cout << "|                            |" << endl;
		cout << "|3.Whoever rolls more during |" << endl;
		cout << "|  3 Rounds - Wins!          |" << endl;
		cout << "-----------------------------" << endl;
		Sleep(3000);
		cout << "Press [ p ] to play ";
		cin >> rules;
		Sleep(1000);
	}
	if (rules == 'p')
	{
		system("cls");
		cout << "LET'S ROLL THE DICE!" << endl;
		PlaySound(TEXT("dice intro haha.wav"), NULL, SND_FILENAME | SND_ASYNC);
		Sleep(2000);
	}
	Sleep(2000);

	for (size_t i = 1; i < 3 + 1; i++)
	{
		system("cls");
		c11 = rand() % 6 + 1;
		c12 = rand() % 6 + 1;
		cout << "              " << i << " ROUND" << endl;
		Sleep(1000);
		cout << "Computer rolls..." << endl;
		Sleep(250);
		PlaySound(TEXT("dice.wav"), NULL, SND_FILENAME | SND_ASYNC);
		Sleep(2000);
		if (c11 == 1)
		{
			cout << "--------- " << endl;
			cout << "|       | " << endl;
			cout << "|   .   | " << endl;
			cout << "|       | " << endl;
			cout << "--------- " << endl;
			csum += 1;
		}
		else if (c11 == 2)
		{
			cout << "--------- " << endl;
			cout << "|   .   | " << endl;
			cout << "|       | " << endl;
			cout << "|   .   | " << endl;
			cout << "--------- " << endl;
			csum += 2;
		}
		else if (c11 == 3)
		{
			cout << "--------- " << endl;
			cout << "|     . | " << endl;
			cout << "|   .   | " << endl;
			cout << "| .     | " << endl;
			cout << "--------- " << endl;
			csum += 3;
		}
		else if (c11 == 4)
		{
			cout << "--------- " << endl;
			cout << "| .   . | " << endl;
			cout << "|       | " << endl;
			cout << "| .   . | " << endl;
			cout << "--------- " << endl;
			csum += 4;
		}
		else if (c11 == 5)
		{
			cout << "--------- " << endl;
			cout << "| .   . | " << endl;
			cout << "|   .   | " << endl;
			cout << "| .   . | " << endl;
			cout << "--------- " << endl;
			csum += 5;
		}
		else if (c11 == 6)
		{
			cout << "--------- " << endl;
			cout << "| .   . | " << endl;
			cout << "| .   . | " << endl;
			cout << "| .   . | " << endl;
			cout << "--------- " << endl;
			csum += 6;
		}

		//-------------------------------

		if (c12 == 1)
		{
			cout << "--------- " << endl;
			cout << "|       | " << endl;
			cout << "|   .   | " << endl;
			cout << "|       | " << endl;
			cout << "--------- " << endl;
			csum += 1;
		}
		else if (c12 == 2)
		{
			cout << "--------- " << endl;
			cout << "|   .   | " << endl;
			cout << "|       | " << endl;
			cout << "|   .   | " << endl;
			cout << "--------- " << endl;
			csum += 2;
		}
		else if (c12 == 3)
		{
			cout << "--------- " << endl;
			cout << "|     . | " << endl;
			cout << "|   .   | " << endl;
			cout << "| .     | " << endl;
			cout << "--------- " << endl;
			csum += 3;
		}
		else if (c12 == 4)
		{
			cout << "--------- " << endl;
			cout << "| .   . | " << endl;
			cout << "|       | " << endl;
			cout << "| .   . | " << endl;
			cout << "--------- " << endl;
			csum += 4;
		}
		else if (c12 == 5)
		{
			cout << "--------- " << endl;
			cout << "| .   . | " << endl;
			cout << "|   .   | " << endl;
			cout << "| .   . | " << endl;
			cout << "--------- " << endl;
			csum += 5;

		}
		else if (c12 == 6)
		{
			cout << "--------- " << endl;
			cout << "| .   . | " << endl;
			cout << "| .   . | " << endl;
			cout << "| .   . | " << endl;
			cout << "--------- " << endl;
			csum += 6;
		}
		cout << "Computers sum: " << csum << endl;
		Sleep(1000);

		//------------player------------
		u11 = rand() % 6 + 1;
		u12 = rand() % 6 + 1;
		cout << "Your turn.. ";
		cin >> var;
		PlaySound(TEXT("dice.wav"), NULL, SND_FILENAME | SND_ASYNC);
		Sleep(2000);
		if (u11 == 1)
		{
			cout << "--------- " << endl;
			cout << "|       | " << endl;
			cout << "|   .   | " << endl;
			cout << "|       | " << endl;
			cout << "--------- " << endl;
			usum += 1;
		}
		else if (u11 == 2)
		{
			cout << "--------- " << endl;
			cout << "|   .   | " << endl;
			cout << "|       | " << endl;
			cout << "|   .   | " << endl;
			cout << "--------- " << endl;
			usum += 2;
		}
		else if (u11 == 3)
		{
			cout << "--------- " << endl;
			cout << "|     . | " << endl;
			cout << "|   .   | " << endl;
			cout << "| .     | " << endl;
			cout << "--------- " << endl;
			usum += 3;
		}
		else if (u11 == 4)
		{
			cout << "--------- " << endl;
			cout << "| .   . | " << endl;
			cout << "|       | " << endl;
			cout << "| .   . | " << endl;
			cout << "--------- " << endl;
			usum += 4;
		}
		else if (u11 == 5)
		{
			cout << "--------- " << endl;
			cout << "| .   . | " << endl;
			cout << "|   .   | " << endl;
			cout << "| .   . | " << endl;
			cout << "--------- " << endl;
			usum += 5;
		}
		else if (u11 == 6)
		{
			cout << "--------- " << endl;
			cout << "| .   . | " << endl;
			cout << "| .   . | " << endl;
			cout << "| .   . | " << endl;
			cout << "--------- " << endl;
			usum += 6;
		}

		//-------------------------------

		if (u12 == 1)
		{
			cout << "--------- " << endl;
			cout << "|       | " << endl;
			cout << "|   .   | " << endl;
			cout << "|       | " << endl;
			cout << "--------- " << endl;
			usum += 1;
		}
		else if (u12 == 2)
		{
			cout << "--------- " << endl;
			cout << "|   .   | " << endl;
			cout << "|       | " << endl;
			cout << "|   .   | " << endl;
			cout << "--------- " << endl;
			usum += 2;
		}
		else if (u12 == 3)
		{
			cout << "--------- " << endl;
			cout << "|     . | " << endl;
			cout << "|   .   | " << endl;
			cout << "| .     | " << endl;
			cout << "--------- " << endl;
			usum += 3;
		}
		else if (u12 == 4)
		{
			cout << "--------- " << endl;
			cout << "| .   . | " << endl;
			cout << "|       | " << endl;
			cout << "| .   . | " << endl;
			cout << "--------- " << endl;
			usum += 4;
		}
		else if (u12 == 5)
		{
			cout << "--------- " << endl;
			cout << "| .   . | " << endl;
			cout << "|   .   | " << endl;
			cout << "| .   . | " << endl;
			cout << "--------- " << endl;
			usum += 5;

		}
		else if (u12 == 6)
		{
			cout << "--------- " << endl;
			cout << "| .   . | " << endl;
			cout << "| .   . | " << endl;
			cout << "| .   . | " << endl;
			cout << "--------- " << endl;
			usum += 6;
		}
		cout << "Your sum: " << usum << endl;
		Sleep(2000);
		system("cls");
		cout << "              " << i << " ROUND" << endl;
		cout << "             " << " Points" << endl;
		cout << "   " << "Computer = " << csum << " || You = " << usum << endl;
		Sleep(3000);

	}
	system("cls");
	if (usum > csum)
	{
		cout << "Congratulations! You Won!" << endl;
		cout << "Computer = " << csum << " || You = " << usum << endl;
		PlaySound(TEXT("dice win outro.wav"), NULL, SND_FILENAME | SND_ASYNC);
		Sleep(7000);
	}
	else
	{
		cout << "Ha.. Looks like you lost" << endl;
		cout << "Computer = " << csum << " || You = " << usum << endl;
		PlaySound(TEXT("dice lose haha.wav"), NULL, SND_FILENAME | SND_ASYNC);
		Sleep(2000);
	}
	
	return 0;
}
