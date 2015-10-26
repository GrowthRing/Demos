#include<iostream>

using namespace std;


bool isHappy(int n)
{
	static int m = n;
	int t = 0;
	if (n == 1) return true;
	else
	{
		while (n != 0)
		{
			t += (n % 10)*(n % 10);
			n /= 10;
		}
	}
	cout << t << endl;
	if (m == t)
	{
		return false;
	}
	isHappy(t);
}


int main()
{

	isHappy(4);

	system("pause");
	return 0;
}