#include<iostream>

using namespace std;

int main()
{

	cout << "数据类型大小：" << endl;
	cout << "char -->\t" << sizeof(char) << endl;  // 1
	cout << "int  -->\t" << sizeof(int) << endl;  // 4
	cout << "short -->\t" << sizeof(short) << endl;  // 2
	cout << "float -->\t" << sizeof(float) << endl;  // 4
	cout << "long  -->\t" << sizeof(long) << endl;  // 4
	cout << "double -->\t" << sizeof(double) << endl; // 8
	cout << "bool -->\t" << sizeof(bool) << endl; // 8


	cout << "char* -->\t" << sizeof(char*) << endl;  // 4
	cout << "int*  -->\t" << sizeof(int*) << endl;  // 4
	cout << "short* -->\t" << sizeof(short*) << endl;  // 4
	cout << "float* -->\t" << sizeof(float*) << endl;  // 4
	cout << "long*  -->\t" << sizeof(long*) << endl;  // 4
	cout << "double* -->\t" << sizeof(double*) << endl; // 4


	system("pause");
	return 0;
}