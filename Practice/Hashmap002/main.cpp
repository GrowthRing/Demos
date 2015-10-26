#include <iostream>
#include <string>
#include <hash_map>

using namespace std;

int main()
{

	hash_map<int, string> hm;

	hm[0] = "aa";
	hm[1] = "bb";
	hm[0] = "cc";
	hm.insert(pair<int,string>(3,"cc"));


	cout << hm.size() << endl;
	cout << hm.max_size() << endl;
	cout << hm[3];

	hash_map<int, string>::iterator it;
	it = hm.find(3);

	system("pause");
	return 0;
}