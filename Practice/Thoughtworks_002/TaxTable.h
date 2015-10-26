#include "Product.h"
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
	map<string, float> getTaxList();
	void setTaxList(map<string, float> tax);
	void initTax();
private:
	int a;
	TaxTable();
	static TaxTable *m_pTaxTable;
	static map<string, float> taxlist;

};

