#include<iostream>
#include "A.h"
#include "B.h"

using namespace std;
int main()
{
	A a;
	B b;
	a.print();
	b.print();
	
	cout << "--------------------" << endl;

	A *p1 = &a;
	A *p2 = &b;

	p1->print();
	p2->print();
	system("pause");
	return 0;
}