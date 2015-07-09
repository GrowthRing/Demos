#include<iostream>

using namespace std;


enum NumType
{
	ZX = 0,  
	ZFC = 1
};

template <typename Type>
Type max(Type a, Type b)
{
	return (a > b) ? a : b;
}


template <class Type>
class Util
{
public:
	Type max(Type a, Type b)
	{
		return (a > b) ? a : b;
	}
	
};


int main()
{
	int a1 = '0';
	int b1 = 324;
	double a2 = 1232.23;
	double b2 = 1232.45;
	char a3 = 'a';
	char b3 = 'b';
	cout << max(a3, b3) << endl;
	Util<int> u1;
	Util<double> u2;
	Util<char> u3;

	cout << "----------------------------" << endl;
	cout << u1.max(a1, b1) << endl;
	cout << u2.max(a2, b2) << endl;
	cout << u3.max(a3, b3) << endl;
	cout << "----------------------------" << endl;
	cout << a1 << endl;
	system("pause");
	return 0;
}