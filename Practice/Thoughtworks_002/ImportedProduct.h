#pragma once
#include "Product.h"

// ���ڲ�Ʒ���л���˰
class ImportedProduct : public Product
{
public:
	ImportedProduct();
	virtual ~ImportedProduct();
	ImportedProduct* GetClassType();

};

