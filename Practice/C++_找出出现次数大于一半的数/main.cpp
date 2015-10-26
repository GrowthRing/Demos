#include<iostream>

using namespace std;

int  findNum(int* a, int n)
{
	int num, k;
	num = a[0];
	k = 1;
	for (int i = 1; i < n; i++)
	{
		if (num == a[i])
		{
			++k;
		}
		else
		{
			num = a[i];
			--k;
		}
	}


	return num;
}

int main()
{

	int a[9] = { 3, 4, 3, 4, 5, 3, 6, 3, 3 };

	cout << findNum(a,9) << endl;

	system("pause");
	return 0;
}