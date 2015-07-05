#include <iostream>

using namespace std;

//对于A，编译器在编译程序时会遵循两条原则：
//一、结构体变量中成员的偏移量必须是成员大小的整数倍（0被认为是任何数的整数倍） 
//二、结构体大小必须是所有成员大小的整数倍。
//
//所以s偏移量 = 0；
//i偏移量 = s偏移量 + s大小 = 2，但2不是int的整数倍，补2，得4；
//c偏移量 = i偏移量 + i大小 = 4 + 4 = 8，是char的整数倍；
//struct的大小 = c偏移量 + c大小 = 8 + 1 = 9，但不是所有成员大小的整数倍，补3，得12，满足。

struct X
{
	short s;
	int i;
	char c;
};

int main()
{

	cout << sizeof(short) << endl;  // 2
	cout << sizeof(int) << endl;  // 4
	cout << sizeof(char) << endl;  // 1
	cout << sizeof(X) << endl;   // 12



	system("pause");
	return 0;
}