#include<iostream>
#include<string>

using namespace std;

//��C++��������������У���ʱ����Ҫ�ж�ĳ������������ͣ���ô�������������ַ�����
//����1�� ���� typeid()���������жϣ���ȱ�㣺�����ڼ̳У���������ָ�븳ֵ������ָ��ʱ����ʱ�жϵĶ�������Ϊ�����ͣ��������������ͣ�

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
