#pragma once
#include "Product.h"

// �޻���˰��Ʒ���ǽ��ڵĲ�Ʒ
class NonTaxProduct : public Product
{
public:
	NonTaxProduct();
	virtual ~NonTaxProduct();
	NonTaxProduct* GetClassType();
};

