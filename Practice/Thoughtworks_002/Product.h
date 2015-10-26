#pragma once
#include<iostream> 
#include<string>

using namespace std;

// 产品基类
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

	// 获取对象的类类型
	Product* GetClassType();
private:
	string name;  // 产品名称
	float price;  // 产品价格
};

