#include<iostream>
#include <string>
#include <algorithm>
using namespace std;


int getSize(char * str)
{
	str[1] = 'O';
	return strlen(str);
}

struct g{ double a; char b; int c; };

bool compare(int a,int b){
	return a > b;  //升序排列，如果改为return a>b，则为降序
}

//sort 对给定区间所有元素进行排序
int main()
{

	char *s = "abcde";
	char ss[] = "abcde";
	string sss = "abcde";
	sss[3] = 'T';


	//int a[] = { 5, 2, 9, 1, 6, 3, 8, 4 };
	//sort(a,a+8,compare);  // 底层是改善的快排序 O（nlogn）

	//for (int i = 0; i < 8; i++)
	//{
	//	cout << a[i] << " ";
	//}
	//cout << endl;


	//g gg = {3};
	//cout << gg.a << endl;
	//cout << (int)(gg.b) << endl;
	//cout << gg.c << endl;

	char *i = "123";
	cout << *(i++) << endl;

	system("pause");
	return 0;
}
