#include<iostream>

using namespace std;

void reverse(char *s, int left, int right);
// 字符串循环移位
//void strMoving(char &a, int n) // 数组不能用引用
void strMoving(char *a, int n) // 数组不能用引用
{
	reverse(a, 0, strlen(a) - 1);
	reverse(a, 0, n - 1);
	reverse(a, n, strlen(a) - 1);
}

// 字符串倒置
void reverse(char *s, int left, int right)
{
	int l = strlen(s);
	int i = left;
	int j = right;
	while (i < j)
	{
		// 位置互换
		s[i] = s[i] ^ s[j];
		s[j] = s[j] ^ s[i];
		s[i] = s[i] ^ s[j];
		i++;
		j--;
	}
}


int main()
{
	char a[] = "www.so.com";
	string astr(a);

	int first = astr.find_first_of(".");
	int se = astr.find_last_not_of(".");

	int l = strlen(a) - 1;
	//strMoving(a, l);
	reverse(a, 0, 9);
	reverse(a, 0, 2);
	reverse(a, 4, 5);

	cout << a << endl;
	//reverse(a);
	system("pause");
	return 0;
}