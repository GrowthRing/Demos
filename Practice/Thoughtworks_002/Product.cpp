#include "Product.h"


// 产品基类
Product::Product()
{
}


Product::~Product()
{
}


void Product::setName(string _name)
{
	this->name = _name;
}

void Product::setPrice(float _price)
{
	this->price = _price;

}

string Product::getName()
{
	return this->name;
}

float Product::getPrice()
{
	return this->price;
}

Product* Product::GetClassType()
{
	return this;
}
