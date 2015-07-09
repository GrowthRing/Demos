#include <iostream>
#include <regex>
using namespace std;


int str2int(char * str)
{
	
	if (str == NULL)
	{
		return 0;
	}

	int n = 0;
	int flag = 1;  // 1��ʾΪ��




	// ��
	if (*str == '-')
	{
		flag = 0;
		str++;
	}
	// ��
	if (*str == '+')
	{
		flag = 1;
		str++;
	}

	// ����Ƿ��ַ�  ȷ��Ϊ����
	regex pattern("(\\d+)");
	//regex pattern("(\\+|-{0,1})(\\d+)");
	if (regex_match(str, pattern))
	{
		return 0;
	}

	while (*str != '\0')
	{

		int c  = *str - '0';
		n = n * 10 + c;
		str++;
	}

	return (flag)?n:0-n;
}

int main()
{

	char a[] = "20000000";
	char * b = "-1200";

	int n = str2int(b);
	cout << n << endl;

	system("pause");
	return 0;
}