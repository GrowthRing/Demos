#pragma once
#include<string>
#include<map>

using namespace std;

// ˰��
// ���õ���ģʽ���һ��˰�������������Ÿ�����Ʒ��˰��������ṩ˰�ʵ��޸Ĺ���
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

