#pragma once
#include "Product.h"

// 进口产品，有基本税
class ImportedProduct : public Product
{
public:
	ImportedProduct();
	virtual ~ImportedProduct();
	ImportedProduct* GetClassType();

};

