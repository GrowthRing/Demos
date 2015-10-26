#include<iostream>
#include<math.h>
#include "Singleton.h"

using namespace std;






int main()
{

	Singleton *p1 = Singleton::getInstance();

	int a = 0;
	//CSingleton *p2 = CSingleton::getInstance();
	//CSingleton *p3 = CSingleton::getInstance();

	//p3->a = 1000;
	//CSingleton *p4 = CSingleton::getInstance();

	//delete(p4);



	//unsigned int a = 6;
	//int b = -20;
	//a + b > 6 ? cout << ">6" : cout << "<=6";
	////unsigned int c = a + b;
	//cout << endl;

	//cout << pow(2, 32);
	return 0;
}