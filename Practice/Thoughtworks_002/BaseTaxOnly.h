#pragma once
#include "Product.h"
class BaseTaxOnly : public Product
{
public:
	BaseTaxOnly();
	~BaseTaxOnly();
	BaseTaxOnly* GetClassType();
};

