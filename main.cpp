#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include "MMsystem.h"

using namespace std;

int main()
{
	PlaySound(TEXT("Song name"), NULL, SND_SYNC);
	system("pause");
	return 0;
}