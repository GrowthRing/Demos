#include<iostream>

using namespace std;

void update(int * b)
{
	int *c = new int();
	*c = 20;
	b = c;
}

int main()
{

	int *a = new int();
	*a = 10;
	update(a);
	cout << *a << endl;
	system("pause");
	return 0;
}
