#include "Barkets.h"
#include<iomanip>


Barkets::Barkets()
{
}


Barkets::~Barkets()
{
}


void Barkets::computePrice(Product * goods, int num, map<string, float> taxm)
{
	Barket bar;
	bar.name = goods->getName();
	bar.count = num;
	bar.price = goods->getPrice();
	if (typeid(*(goods->GetClassType())) == typeid(NonTaxProduct))
	{
		bar.tax = goods->getPrice() * taxm["nonTax"];
	}
	if (typeid(*(goods->GetClassType())) == typeid(BaseTaxOnly ))
	{
		bar.tax = goods->getPrice() * taxm["baseOnly"];
	}

	if (typeid(*(goods->GetClassType())) == typeid(ImportedButNonbase ))
	{
		bar.tax = goods->getPrice() * taxm["importedOnly"];
	}

	if (typeid(*(goods->GetClassType())) == typeid(ImportedProduct ))
	{
		bar.tax = goods->getPrice() * taxm["importedAndBase"];
	}

	barket.push_back(bar);
	salesTaxes += bar.tax;
	total += bar.price + bar.tax;
}

void Barkets::outPutBarket(vector<InputData> iputs)
{
	//cout << setprecision(2);
	for (int i = 0; i < barket.size(); i++)
	{
		cout << barket[i].count << " " << barket[i].name << ":" << barket[i].price + barket[i].tax << endl;
	}
	cout << "Sales Taxes:" << salesTaxes << endl;
	cout << "Total:" << total << endl;

}

