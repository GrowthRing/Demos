#include <iostream>

using namespace std;

//����A���������ڱ������ʱ����ѭ����ԭ��
//һ���ṹ������г�Ա��ƫ���������ǳ�Ա��С����������0����Ϊ���κ������������� 
//�����ṹ���С���������г�Ա��С����������
//
//����sƫ���� = 0��
//iƫ���� = sƫ���� + s��С = 2����2����int������������2����4��
//cƫ���� = iƫ���� + i��С = 4 + 4 = 8����char����������
//struct�Ĵ�С = cƫ���� + c��С = 8 + 1 = 9�����������г�Ա��С������������3����12�����㡣

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