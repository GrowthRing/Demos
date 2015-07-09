#include<iostream>

using namespace std;
// 将A适配成B

class A
{
public:
	virtual void say()
	{

	}
};

class B
{
public:
	void talk()
	{
		cout << "B talking" << endl;
	}

};

class Aadapter : public  A
{
public:
	B b;
	virtual void say()
	{
		cout << "使用了适配器之后变成say" << endl;
		b.talk();
	}
};

int main()
{
	Aadapter adapter;
	A *a = &adapter;
	a->say();

	system("pause");
	return 0;

}