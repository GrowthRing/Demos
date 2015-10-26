#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

typedef struct MyData{
	int a;
	int b;

};

int main()
{

	vector<string> vs;
	int a = -1 ,b =-1 ,m,n;
	vector<MyData> vec;
	while (a != 0 && b != 0)
	{
		cin >> a >> b;
		MyData d;
		d.a = a;
		d.b = b;
		vec.push_back(d);
	}

	int count = 0;
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i].a == 1 || vec[i].b == 1)
		{

		}
	}

	cout << a << "--" << b;
	system("pause");
	return 0;


}
