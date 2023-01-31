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
	int min = num1, max = num1;
	for (size_t i = num1 + 1; i < num2 + 1; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << endl;
	if (max == arr[0])
	{
		cout << "Your maximum income [ " << max << "$ ] was in January";
	}
	else if (max == arr[1])
	{
		cout << "Your maximum income [ " << max << "$ ] was in February";
	}
	else if (max == arr[2])
	{
		cout << "Your maximum income [ " << max << "$ ] was in March";
	}
	else if (max == arr[3])
	{
		cout << "Your maximum income [ " << max << "$ ] was in April";
	}
	else if (max == arr[4])
	{
		cout << "Your maximum income [ " << max << "$ ] was in May";
	}
	else if (max == arr[5])
	{
		cout << "Your maximum income [ " << max << "$ ] was in June";
	}
	else if (max == arr[6])
	{
		cout << "Your maximum income [ " << max << "$ ] was in July";
	}
	else if (max == arr[7])
	{
		cout << "Your maximum income [ " << max << "$ ] was in August";
	}
	else if (max == arr[8])
	{
		cout << "Your maximum income [ " << max << "$ ] was in September";
	}
	else if (max == arr[9])
	{
		cout << "Your maximum income [ " << max << "$ ] was in October";
	}
	else if (max == arr[10])
	{
		cout << "Your maximum income [ " << max << "$ ] was in November";
	}
	else if (max == arr[11])
	{
		cout << "Your maximum income [ " << max << "$ ] was in December";
	}
	cout << endl;
	//--------------MIN------------------------

	if (min == arr[0])
	{
		cout << "Your minimum income [ " << min << "$ ] was in January";
	}
	else if (min == arr[1])
	{
		cout << "Your minimum income [ " << min << "$ ] was in February";
	}
	else if (min == arr[2])
	{
		cout << "Your minimum income [ " << min << "$ ] was in March";
	}
	else if (min == arr[3])
	{
		cout << "Your minimum income [ " << min << "$ ] was in April";
	}
	else if (min == arr[4])
	{
		cout << "Your minimum income [ " << min << "$ ] was in May";
	}
	else if (min == arr[5])
	{
		cout << "Your minimum income [ " << min << "$ ] was in June";
	}
	else if (min == arr[6])
	{
		cout << "Your minimum income [ " << min << "$ ] was in July";
	}
	else if (min == arr[7])
	{
		cout << "Your minimum income [ " << min << "$ ] was in August";
	}
	else if (min == arr[8])
	{
		cout << "Your minimum income [ " << min << "$ ] was in September";
	}
	else if (min == arr[9])
	{
		cout << "Your minimum income [ " << min << "$ ] was in October";
	}
	else if (min == arr[10])
	{
		cout << "Your minimum income [ " << min << "$ ] was in November";
	}
	else if (min == arr[11])
	{
		cout << "Your minimum income [ " << min << "$ ] was in December";
	}
	return 0;
}
