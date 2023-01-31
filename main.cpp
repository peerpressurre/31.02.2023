#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include "MMsystem.h"

using namespace std;

int main()
{
	const int size = 10;
	int arr[size];
	srand(time(0));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << "  ";
	}
	int min = arr[0], max = arr[0];
	for (size_t i = 1; i < size; i++)
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
	cout << "Min: " << min << "  Max: " << max;
	return 0;
}
