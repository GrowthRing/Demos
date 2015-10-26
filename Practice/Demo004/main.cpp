#include<iostream>

using namespace std;

int main()
{
	// 0^0=0 0^1=1 1^0=1 1^1=0
	// 0与其他数按位异或运算，结果保持其他数不变
	// 1与其他数按位异或运算，结果取反
	int a = 23;
	int b = 40;
	int c = 40;
	int d = 40;
	char e[] = "abc";
	char f[] = "def";

	e[2] = e[2] ^ f[2];
	f[2] = f[2] ^ e[2];
	e[2] = e[2] ^ f[2];



	// 任何数按位异或自己 = 把自己置0
	c = c^c;

	// 数两次异或同一个数，仍为原始值
	d = d^a^a;

	// 在不另外开辟空间的情况下，利用异或运算来实现两个数互换
	a = a^b;
	b = b^a;
	a = a^b;



	system("pause");
	return 0;

}