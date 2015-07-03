#include <iostream>
#include "Util.h"
using namespace std;

// 1.在c++的函数里面，如果把一个数组作为参数传进去，那么这个数组就会退化为一个指针，因而就不知道这个数组的长度（这里的数组指的是静态的而不是new出来的）.

// 函数的模板
template <class  T>
int getArraySize(T &arr)   // 这里如果用地址传递的话 会造成sizeof(arr) = 4，即一个指针的大小 故应该用引用传递
{
	return sizeof(arr) / sizeof(arr[0]);
}


int main()
{
	int arr[] = { 48, 62, 35, 77, 55, 14, 35, 98 };
	char as[] = "0123456789";
	Util<int> aa;
	cout << aa.getArraySize2() << endl;
	system("pause");
	return 0;
}