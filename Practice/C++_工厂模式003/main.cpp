#include <iostream>
#include <string>

using namespace std;
// 简单的工厂模式


// 操作类
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

// 加法具体类
class Add : public Operator1
{
public:
	double getResult()
	{
		double result = getNumberA() + getNumberB();
		return result;
	}
};

// 减法具体类
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

// 乘法具体类
class Multi : public Operator2
{
public:
	double getResult()
	{
		double result = getNumberA() * getNumberB();
		return result;
	}
};

// 除法具体类
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


// 工厂类
class Factory
{
public:
	virtual Operator1* createOperator1() = 0;  // 加减
	virtual Operator2* createOperator2() = 0;  // 乘除

};

// 工厂具体类
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

// 工厂具体类——Sub
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
	// 1. 定义操作基类和工厂基类
	Operator2 *oper;
	Factory * factory;

	// 2. 利用对应的工厂创建对应的操作对象
	//factory = new AddFactory();
	factory = new AddMultiFactory();
	oper = factory->createOperator2();  //  利用多态来实现由工厂基类调用子类的创建

	// 3. 业务需求操作
	oper->setNumberA(20);
	oper->setNumberB(30);
	oper->getResult();

	cout << oper->getResult() << endl;
	system("pause");
	return 0;
}
