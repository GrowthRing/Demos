#pragma once
#include<iostream> 
#include<string>

using namespace std;

// ��Ʒ����
class Product
{
public:
	Product();
	virtual ~Product();
	// setters
	virtual void setName(string _name);
	virtual void setPrice(float _price);
	// getters
	virtual string getName();
	virtual float getPrice();

	// ��ȡ�����������
	Product* GetClassType();
private:
	string name;  // ��Ʒ����
	float price;  // ��Ʒ�۸�
};

