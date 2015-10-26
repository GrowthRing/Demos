#include<iostream>
#include<map>

using namespace std;

int main()
{
	char a[] = "@abc@24a";

	map<char, int> maps;
	int length = strlen(a);
	for (int i = 0; i < length; i++)
	{
		// 方法1
		//map<char, int>::iterator it = maps.begin();
		//while (it != maps.end())
		//{
		//	if (it->first == a[i])
		//	{
		//		it->second++;
		//		break;
		//	}
		//	it++;
		//}
		//if (it == maps.end())
		//{
		//	maps.insert(map<char,int>::value_type(a[i],1));
		//}

		// 方法2
		map<char, int>::iterator it = maps.find(a[i]);
		if (it != maps.end())
		{
			it->second++;
		}
		else
		{
			maps.insert(map<char,int>::value_type(a[i],1));
		}

		// 方法3
		//maps[a[i]]++;
		
	}

	char c = maps['@'];

	//memset(a,'3',3);
	return 0;
}