#include<iostream>

using namespace std;
// ������ÿ���ַ�Ϊ���ģ�������������Ӵ�������ȡ��������Ӵ�
// O(n2)
// ��Ȼ����ʱ�临�Ӷ�ΪO(n)���㷨����>Manacher�㷨������û����~

// ��ĳ���ַ�Ϊ���ļ���������Ӵ�
int aroundCenter(char *a, int p)
{
	int n = 0;  // ��¼���ַ�Ϊ���ĵ�ĳһ��Ļ����Ӵ�����
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


// ������Ӵ�
void longestChidren(char *a, int *p, int *max)
{
	int l = strlen(a);
	*max = 0; // ��¼�������Ӵ��ĳ��ȣ�2*max+1
	*p = 0;  // ��¼������Ӵ�������
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