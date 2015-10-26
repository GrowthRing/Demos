#include "TaxTable.h"
#include<map>

//TaxTable* TaxTable::m_pTaxTable = NULL;  // 定义
TaxTable* TaxTable::m_pTaxTable = NULL;  // 定义

map<string, float> TaxTable::taxlist; //定义map对象


TaxTable::TaxTable()
{
	
	initTax();
}

TaxTable::~TaxTable()
{
}

TaxTable* TaxTable::getTaxTable()
{
	if (m_pTaxTable == NULL)
		m_pTaxTable = new TaxTable();
	return m_pTaxTable;
}

void TaxTable::initTax()
{
	taxlist.insert(map<string, float>::value_type("baseOnly", 0.1));
	taxlist.insert(pair<string, float>("nonTax", 0.0f));
	taxlist.insert(pair<string, float>("importedAndBase", 0.15f));
	taxlist.insert(pair<string, float>("importedOnly", 0.05f));
}

void TaxTable::setTaxList(map<string, float> tax)
{
	this->taxlist = tax;
}

map<string, float> TaxTable::getTaxList()
{
	
	return taxlist;
}
