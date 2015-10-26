#include <iostream>
#include <time.h>
#include <stdio.h>
#include <windows.h>


using namespace std;

int main()
{
	time_t start, end;
	double cost;
	time(&start);
	Sleep(10);
	time(&end);
	cost = difftime(end, start);
	printf("%f/n", cost);

	system("pause");
	return 0;
}