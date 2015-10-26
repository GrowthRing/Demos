#include "TaxTable.h"

TaxTable *TaxTable::m_pTaxTable = 0;
map<short, string> TaxTable::dictionary;//定义map对象
map<string, float> TaxTable::taxlists; //定义map对象


TaxTable::TaxTable()
{
	dictionary.insert(pair<short, string>(1, "value"));
	taxlists.insert(pair<string, int >("aaa", 0.4));
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