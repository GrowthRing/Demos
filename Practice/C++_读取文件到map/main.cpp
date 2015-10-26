#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

int main()
{
	map<string, string> cities;
	ifstream input;
	input.open("cities.txt");
	cities.clear();
	char temp;
	string key, value;
	while (!input.eof())
	{
		input >> value >> key;
		cities.insert(make_pair(key,value));
	}
	input.close();
	system("pause");
	return 0;
}
