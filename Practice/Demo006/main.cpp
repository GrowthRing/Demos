#include <iostream>

using namespace std;


//�����У����ʲô��û�У�����ռ��1���ֽڣ�һ��������������ռ�ÿռ��Ա������1���ֽھͲ��ڼ���֮�ڣ���һ����ֻ��һ��int��ռ��4�ֽڶ�����5�ֽڡ�
//
//���ֻ�г�Ա����������ֻռ��1���ֽڣ���Ϊ�ຯ����ռ�ÿռ�
//
//�麯����Ϊ����һ���麯������Ҫ4���ֽڣ����ݳ�Ա�������Ϊָ����Ϊ4�ֽڣ�ע�����ֽڶ��룬���Ϊ13�ֽڣ����λ��16�ֽڿռ�
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
