#pragma once
#include "Product.h"

// 无基本税产品，非进口的产品
class NonTaxProduct : public Product
{
public:
	NonTaxProduct();
	virtual ~NonTaxProduct();
	NonTaxProduct* GetClassType();
};

