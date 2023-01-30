#include <iostream>
#include <stdlib.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include<stdio.h>

using namespace std;

int main()
{
	char sym;
	int way, speed;
	cout << "Enter symbol-> ";
	cin >> sym;
	cout << "Enter [ 1 ] for horizontal output or [ 2 ] for vertical-> ";
	cin >> way;
	cout << "Choose speed of output: [ 1] for Fast || [ 2 ] for Normal || [ 3 ] for Slow -> ";
	cin >> speed;
	switch (way)
	{
	case 1:
	{
		for (size_t i = 0; i < 10 + 1; i++)
		{
			cout << sym << " ";
			if (speed == 1)
			{
				Sleep(100);
			}
			else if (speed == 2)
			{
				Sleep(500);
			}
			else if (speed == 3)
			{
				Sleep(1000);
			}

		}
	}
	case 2:
	{
		for (size_t i = 0; i < 10 + 1; i++)
		{
			cout << sym << " " << endl;
			if (speed == 1)
			{
				Sleep(100);
			}
			else if (speed == 2)
			{
				Sleep(500);
			}
			else if (speed == 3)
			{
				Sleep(1000);
			}

		}
	}
	default:
		break;
	}
	


	return 0;
}