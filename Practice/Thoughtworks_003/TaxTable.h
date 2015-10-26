#pragma once
#include<string>
#include<map>

using namespace std;

// 税表
// 利用单例模式设计一个税表，这个类里面存着各种商品的税率情况，提供税率的修改功能
class TaxTable
{
public:
	~TaxTable();
	static TaxTable* getTaxTable();

private:
	TaxTable();
	static TaxTable *m_pTaxTable;
	static map<short, string> dictionary;
	static map<string, float> taxlists;




};

