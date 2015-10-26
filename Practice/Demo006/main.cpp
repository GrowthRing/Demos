#include <iostream>

using namespace std;


//在类中，如果什么都没有，则类占用1个字节，一旦类中有其他的占用空间成员，则这1个字节就不在计算之内，如一个类只有一个int则占用4字节而不是5字节。
//
//如果只有成员函数，则还是只占用1个字节，因为类函数不占用空间
//
//虚函数因为存在一个虚函数表，需要4个字节，数据成员对象如果为指针则为4字节，注意有字节对齐，如果为13字节，则进位到16字节空间
class A{

public:
	int m;
	virtual void say(){
		cout << "This is A" << endl;
	}

};


class B :public A{

public:
	void say(){
		cout << "This is B" << endl;
	}

};

class C{

};


class D{
	int m;
	int n;

};

class E{
public:
	virtual void say(){
		cout << "This is B" << endl;
	}

};

class F{

public:
	char a;
	int m;
	char b;
	virtual void say()
	{

	}
	static void ask()
	{

	}
};

int main()
{
	A a;
	B b;
	A *aa = new B();

	B *bb = new B();

	a.say();
	b.say();
	aa->say();
	bb->say();


	
	cout << "------------------------" << endl;
	cout << sizeof(C) << endl;
	cout << "------------------ " << sizeof(F) << endl;




	system("pause");
	return 0;
}
