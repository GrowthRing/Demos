#include <iostream>
#include "Util.h"
using namespace std;

// 1.��c++�ĺ������棬�����һ��������Ϊ��������ȥ����ô�������ͻ��˻�Ϊһ��ָ�룬����Ͳ�֪���������ĳ��ȣ����������ָ���Ǿ�̬�Ķ�����new�����ģ�.

// ������ģ��
template <class  T>
int getArraySize(T &arr)   // ��������õ�ַ���ݵĻ� �����sizeof(arr) = 4����һ��ָ��Ĵ�С ��Ӧ�������ô���
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