#pragma once
#include "Product.h"

// 进口的，无基本税的产品
class ImportedButNonbase : public Product
{
public:
	ImportedButNonbase();
	~ImportedButNonbase();
	ImportedButNonbase* GetClassType();
};

