#pragma once
#include "Product.h"

// ���ڵģ��޻���˰�Ĳ�Ʒ
class ImportedButNonbase : public Product
{
public:
	ImportedButNonbase();
	~ImportedButNonbase();
	ImportedButNonbase* GetClassType();
};

