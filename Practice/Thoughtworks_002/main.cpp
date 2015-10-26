#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include "Product.h"
#include "TaxTable.h"
#include "ImportedProduct.h"
#include "ImportedButNonbase.h"
#include "BaseTaxOnly.h"
#include "NonTaxProduct.h"
#include "Barkets.h"

using namespace std;

int main()
{
	TaxTable *tax = TaxTable::getTaxTable();
	map<string, float> &taxlist = tax->getTaxList();
	vector<string> vs;
	string s;
	while (getline(cin, s)) {
		vs.push_back(s);
	}

	vector<InputData> iputs;
	for (int i = 0; i < vs.size(); i++)
	{
		InputData idatas;
		int l = vs[i].find_first_of(" ");
		int r = vs[i].find_last_of(" ");
		string ns = vs[i].substr(0, l);
		idatas.describe = vs[i].substr(l + 1, r - l - 1);
		string fs = vs[i].substr(r+1, vs[i].length()-1-r);
		idatas.n = atoi(ns.c_str());
		idatas.price = atof(fs.c_str());
		iputs.push_back(idatas);
	}

	Barkets barks;
	NonTaxProduct *book = new NonTaxProduct();
	book->setName("book");
	book->setPrice(12.49);

	BaseTaxOnly *musicCD = new BaseTaxOnly();
	musicCD->setName("musicCD");
	musicCD->setPrice(14.99);

	NonTaxProduct *chocolateBar = new NonTaxProduct();
	chocolateBar->setName("chocolateBar");
	chocolateBar->setPrice(0.85);

	barks.computePrice(book, 1, taxlist);
	barks.computePrice(musicCD, 1, taxlist);
	barks.computePrice(chocolateBar, 1, taxlist);

	barks.outPutBarket(iputs);
	system("pause");
	return 0;
}
