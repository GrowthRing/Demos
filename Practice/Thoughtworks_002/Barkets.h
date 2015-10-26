#pragma once
#include<map>
#include<vector>
#include<string>
#include "Product.h"
#include "ImportedProduct.h"
#include "ImportedButNonbase.h"
#include "BaseTaxOnly.h"
#include "NonTaxProduct.h"

using namespace std;

typedef struct InputData
{
	int n;
	string describe;
	float price;
};

typedef struct Barket
{
	int count;
	string name;
	float price;
	float  tax;
};

class Barkets
{
public:
	Barkets();
	~Barkets();
	void computePrice(Product * goods, int num, map<string, float> m);
	void outPutBarket(vector<InputData> iputs);

	vector<Barket> barket;
	float salesTaxes;
	float total;
};

