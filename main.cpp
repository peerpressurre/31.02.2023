#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include "MMsystem.h"

using namespace std;

int main()
{
	const int size = 12;
	int arr[size];
	cout << "Enter your monthly income during this year:" << endl;
	for (size_t i = 0; i < size; i++)
	{
		cout << "-> ";
		cin >> arr[i];
	}
	int num1, num2;
	cout << "Enter range of searching:" << endl;
	cout << "From: ";
	cin >> num1;
	cout << "To: ";
	cin >> num2;
	if (num1 > num2)
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}

	int min, max;
	min = max = num1 - 1;
	for (size_t i = num1; i < num2; i++)
	{
		if (arr[i] < arr[min])
		{
			min = i;
		}
		if (arr[i] > arr[max])
		{
			max = i;
		}
	}

	cout << "In range between " << num1 << " month and " << num2 << " month:" << endl;
	if (max == 0)
	{
		cout << "Your maximum income was in January - " << arr[max] << "$" << endl;
	}
	else if (max == 1)
	{
		cout << "Your maximum income was in February - " << arr[max] << "$" << endl;
	}
	else if (max == 2)
	{
		cout << "Your maximum income was in March - " << arr[max] << "$" << endl;
	}
	else if (max == 3)
	{
		cout << "Your maximum income was in April - " << arr[max] << "$" << endl;
	}
	else if (max == 4)
	{
		cout << "Your maximum income was in May - " << arr[max] << "$" << endl;
	}
	else if (max == 5)
	{
		cout << "Your maximum income was in June - " << arr[max] << "$" << endl;
	}
	else if (max == 6)
	{
		cout << "Your maximum income was in July - " << arr[max] << "$" << endl;
	}
	else if (max == 7)
	{
		cout << "Your maximum income was in August - " << arr[max] << "$" << endl;
	}
	else if (max == 8)
	{
		cout << "Your maximum income was in September - " << arr[max] << "$" << endl;
	}
	else if (max == 9)
	{
		cout << "Your maximum income was in October - " << arr[max] << "$" << endl;
	}
	else if (max == 10)
	{
		cout << "Your maximum income was in November - " << arr[max] << "$" << endl;
	}
	else if (max == 11)
	{
		cout << "Your maximum income was in December - " << arr[max] << "$" << endl;
	}
	//--------------MIN------------------------

	if (min == 0)
	{
		cout << "Your minimum income was in January - " << arr[min] << "$" << endl;;
	}
	else if (min == 1)
	{
		cout << "Your minimum income was in February - " << arr[min] << "$" << endl;;
	}
	else if (min == 2)
	{
		cout << "Your minimum income was in March - " << arr[min] << "$" << endl;;
	}
	else if (min == 3)
	{
		cout << "Your minimum income was in April - " << arr[min] << "$" << endl;;
	}
	else if (min == 4)
	{
		cout << "Your minimum income was in May - " << arr[min] << "$" << endl;;
	}
	else if (min == 5)
	{
		cout << "Your minimum income was in June - " << arr[min] << "$" << endl;;
	}
	else if (min == 6)
	{
		cout << "Your minimum income was in July - " << arr[min] << "$" << endl;
	}
	else if (min == 7)
	{
		cout << "Your minimum income was in August - " << arr[min] << "$" << endl;;
	}
	else if (min == 8)
	{
		cout << "Your minimum income was in September - " << arr[min] << "$" << endl;;
	}
	else if (min == 9)
	{
		cout << "Your minimum income was in October - " << arr[min] << "$" << endl;;
	}
	else if (min == 10)
	{
		cout << "Your minimum income was in November - " << arr[min] << "$" << endl;;
	}
	else if (min == 11)
	{
		cout << "Your minimum income was in December - " << arr[min] << "$" << endl;;
	}
	return 0;
}
