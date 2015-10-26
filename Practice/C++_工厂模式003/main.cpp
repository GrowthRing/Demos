#include <iostream>
#include <string>

using namespace std;
// �򵥵Ĺ���ģʽ


// ������
class Operator1
{
public:
	double getNumberA() const { return numberA; }
	void setNumberA(double val) { numberA = val; }
	double getNumberB() const { return numberB; }
	void setNumberB(double val) { numberB = val; }
	virtual double getResult()
	{
		double result = 0;
		return result;
	}
private:
	double numberA;
	double numberB;
};

// �ӷ�������
class Add : public Operator1
{
public:
	double getResult()
	{
		double result = getNumberA() + getNumberB();
		return result;
	}
};

// ����������
class Sub : public Operator1
{
public:
	double getResult()
	{
		double result = getNumberA() - getNumberB();
		return result;
	}
};

class Operator2
{
public:
	double getNumberA() const { return numberA; }
	void setNumberA(double val) { numberA = val; }
	double getNumberB() const { return numberB; }
	void setNumberB(double val) { numberB = val; }

	virtual double getResult()
	{
		double result = 0;
		return result;
	}
private:
	double numberA;
	double numberB;
};

// �˷�������
class Multi : public Operator2
{
public:
	double getResult()
	{
		double result = getNumberA() * getNumberB();
		return result;
	}
};

// ����������
class Div : public Operator2
{
public:
	double getResult()
	{
		double result = 0;
		if (getNumberB() != 0)
		{
			result = getNumberA() / getNumberB();
			return result;
		}
		else
		{
			return result;
		}
	}
};


// ������
class Factory
{
public:
	virtual Operator1* createOperator1() = 0;  // �Ӽ�
	virtual Operator2* createOperator2() = 0;  // �˳�

};

// ����������
class AddMultiFactory : public Factory
{
	Operator1* createOperator1()
	{
		return new Add();
	}

	Operator2* createOperator2()
	{
		return new Multi();
	}
};

// ���������ࡪ��Sub
class SubDivFactory : public Factory
{
	Operator1* createOperator1()
	{
		return new Sub();
	}

	Operator2* createOperator2()
	{
		return new Div();
	}
};


int main()
{
	// 1. �����������͹�������
	Operator2 *oper;
	Factory * factory;

	// 2. ���ö�Ӧ�Ĺ���������Ӧ�Ĳ�������
	//factory = new AddFactory();
	factory = new AddMultiFactory();
	oper = factory->createOperator2();  //  ���ö�̬��ʵ���ɹ��������������Ĵ���

	// 3. ҵ���������
	oper->setNumberA(20);
	oper->setNumberB(30);
	oper->getResult();

	cout << oper->getResult() << endl;
	system("pause");
	return 0;
}
