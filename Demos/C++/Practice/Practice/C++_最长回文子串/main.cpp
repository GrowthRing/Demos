#include<iostream>

using namespace std;
// 依次以每个字符为中心，计算其最长回文子串，最终取其中最长的子串
// O(n2)
// 当然还有时间复杂度为O(n)的算法——>Manacher算法，但是没掌握~

// 以某个字符为中心计算其回文子串
int aroundCenter(char *a, int p)
{
	int n = 0;  // 记录以字符为中心的某一侧的回文子串长度
	int l = strlen(a);
	int i = p - 1;
	int j = p + 1;
	while (i >= 0 && j <=  l-1 && a[i] == a[j])
	{
		i--;
		j++;
		n++;
	}
	return n;
}


// 最长回文子串
void longestChidren(char *a, int *p, int *max)
{
	int l = strlen(a);
	*max = 0; // 记录最大回文子串的长度：2*max+1
	*p = 0;  // 记录最长回文子串的中心
	for (int i = 0; i < l; i++)
	{
		int n = aroundCenter(a, i);
		if (n > *max)
		{
			*max = n;
			*p = i;
		}
	}

}



int main()
{

	char *a = "abcabccbaabcdcba";
	char *r;
	int p, n;
	longestChidren(a, &p, &n);

	for (int i = p - n; i <= p + n; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;

	system("pause");
	return 0;
}