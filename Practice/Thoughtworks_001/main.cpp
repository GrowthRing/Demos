#include<iostream>

using namespace std;

class Product
{
public:
	Product(){ cout << "Father Product" << endl; }
	virtual ~Product(){ cout << "Delete Father" << endl; }
	int x = 1;
};



class Product1
{
public:
	Product1(){ cout << "Father Product1" << endl; }
	virtual ~Product1(){ cout << "Delete Father1" << endl; }
	int x = 2;

};


class A : public Product, public Product1
{
public:
	 A(){ cout << "A Product" << endl; }
	~A(){ cout << "Delete A" << endl; }
};

int main()
{
	Product *p = new A();
	cout << p->x << endl;
	cout << "********************************" << endl;
	delete p;
	system("pause");
	return 0;
}