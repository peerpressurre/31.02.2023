#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include "MMsystem.h"

using namespace std;

int main()
{
	//---------------EX1----------------
	int n;
	cout << "Enter size of an array -> ";
	cin >> n;
	const int size = 200;
	int arr[size];
	srand(time(0));
	for (size_t i = 0; i < n; i++)
	{
		arr[i] =  rand() % 30 + (-10);
		cout << arr[i] << "  ";
	}
	int negsum = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] < 0)
		{
			negsum += arr[i];
		}
	}
	cout << endl << "\n";
	cout << "Sum of negative numbers: " << negsum << endl;;

	//---------------EX2----------------
	int min, max, mul = 1;
	
	min = max = 0;
	for (size_t i = 1; i < n; i++)
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
	
	if (min > max)
	{
		int temp = min;
		min = max;
		max = temp;
	}
	
	for (size_t i = min; i <= max; i++)
	{
		mul *= arr[i];
	}
	cout << "Mul between min and max: " << mul << endl;

	//---------------EX3----------------
	int mul2 = 1;
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			mul2 *= arr[i];
		}
	}
	
	cout << "Mul of even numbers: " << mul2 << endl;;

	//---------------EX4----------------
	int neg1, neg2, mul3 = 1;

	neg1 = neg2 = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] < 0)
		{
			neg1 = i;
			break;
		}
	}
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] < 0)
		{
			neg2 = i;
		}
	}

	for (size_t i = neg1; i <= neg2; i++)
	{
		mul3 *= arr[i];
	}
	cout << "Mul between firs and last negative number: " << mul3 << endl;
	cout << "*if mul is 0, it's because one of multipliers is 0";
	return 0;

}