#include <iostream>
#include <regex>
#include <string>
#include <windows.h>
using namespace std;

//注意：当字符串为空时，也会返回一个空字符串
void split(std::string& s, std::string& delim, std::vector< std::string >* ret)
{
	size_t last = 0;
	size_t index = s.find_first_of(delim, last);
	while (index != std::string::npos)
	{
		ret->push_back(s.substr(last, index - last));
		last = index + 1;
		index = s.find_first_of(delim, last);
	}
	if (index - last>0)
	{
		ret->push_back(s.substr(last, index - last));
	}
}

int main()
{

	string s = "";
	int i = s.find("/");
	string de = " ";
	vector< std::string > vec;
	split(s, de, &vec);

	//char *CStr = "string to convert";
	//size_t len = strlen(CStr) + 1;
	//size_t converted = 0;
	//wchar_t *WStr;
	//WStr = (wchar_t*)malloc(len*sizeof(wchar_t));
	//mbstowcs_s(&converted, WStr, len, CStr, _TRUNCATE);

	//regex pattern(("[\u5929][\u6c14]"));
	regex pattern(("[t][o]"));

	//MultiByteToWideChar("/天气");
	char a[] = "/天气";
	bool b = regex_match("/天气", pattern);
	//bool b = match_results("/天气");

	system("pause");
	return 0;
}