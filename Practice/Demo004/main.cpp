#include<iostream>

using namespace std;

int main()
{
	// 0^0=0 0^1=1 1^0=1 1^1=0
	// 0����������λ������㣬�����������������
	// 1����������λ������㣬���ȡ��
	int a = 23;
	int b = 40;
	int c = 40;
	int d = 40;
	char e[] = "abc";
	char f[] = "def";

	e[2] = e[2] ^ f[2];
	f[2] = f[2] ^ e[2];
	e[2] = e[2] ^ f[2];



	// �κ�����λ����Լ� = ���Լ���0
	c = c^c;

	// ���������ͬһ��������Ϊԭʼֵ
	d = d^a^a;

	// �ڲ����⿪�ٿռ������£��������������ʵ������������
	a = a^b;
	b = b^a;
	a = a^b;



	system("pause");
	return 0;

}