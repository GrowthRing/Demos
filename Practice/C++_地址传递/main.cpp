#include <iostream>

using namespace std;

void update(int *b)
{
	*b = 10;
}


int main()
{
	int a = 5;
	update(&a);
	cout << a << endl;    // 10
	system("pause");
	return 0;
}