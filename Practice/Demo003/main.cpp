#include<iostream>

using namespace std;

// ×Ö·û´®Ñ­»·ÒÆ¶¯
void strMove(char *a, int n)
{
	int length = strlen(a);
	int i = 1;
	while (i <= n)
	{
		char tmp = a[length - 1];
		for (int j = length - 1; j > 0; j--)
		{
			a[j] = a[j - 1];
		}
		a[0] = tmp;
		i++;
	}
}



int main()
{
	char *a = "abcdefghi";
	char b[] = "abcdefghi";
	//int nl1 = strlen(a);  // 9
	//int nl2 = strlen(b);  // 9
	strMove(a,2);

	for (int i = 0; i < strlen(a); i++)
	{
		cout << a[i];
	}
	cout << endl;
	system("pause");
	return 0;
}