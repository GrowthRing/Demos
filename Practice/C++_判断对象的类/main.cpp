#include<iostream>
#include<string>

using namespace std;

//在C++面向对象程序设计中，有时候需要判断某个对象的类类型，那么可以有下列两种方法：
//方法1： 采用 typeid()函数进行判断：（缺点：当存在继承，并且子类指针赋值给父类指针时，此时判断的对象类型为父类型，而不是子类类型）

class A{
public:
	virtual A* GetClassType(void){
		return this;
	}

};

class B: public A{

public:
	B* GetClassType(void){
		return this;
	}

};


int main()
{
	A a;
	A *c;

	B b;
	c = new B();
	if (typeid(*(c->GetClassType())) == typeid(B))
	cout << "aaa" << endl;

	//if (typeid(a) == typeid(c))
	//{
	//	cout << typeid(a).name() << endl;
	//	cout << typeid(string).name() << endl;
	//}
	cout << "********************************" << endl;
	system("pause");
	return 0;
}
