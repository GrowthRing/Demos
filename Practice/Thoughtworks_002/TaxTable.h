#include "Product.h"
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
	map<string, float> getTaxList();
	void setTaxList(map<string, float> tax);
	void initTax();
private:
	int a;
	TaxTable();
	static TaxTable *m_pTaxTable;
	static map<string, float> taxlist;

};

