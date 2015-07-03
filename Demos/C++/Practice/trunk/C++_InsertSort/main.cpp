#include<iostream>
#include<vector>

using namespace std;

// ������˼�롿
//  1. ����һ���µ����ݲ��뵽�Ѿ�����������С�
//  2. ����ȡ����ĵ�һ����Ϊһ�����У���ô���������
//  3. ��������ȡ�������ŵ���һ�����ݣ����뵽֮ǰ�����������У�����֤����Ȼ����

// 
// �����岽�衿
//  1. 
//  2. 
//  3. 
//  4. 
// 
// ��֪ʶ�㡿 
//  �ȶ�
//  �ռ临�Ӷ�O(1) 
//  ʱ�临�Ӷ�O(n2) 
//  ��������������Ҫ�ƶ�n*(n-1)/2��Ԫ�� 
//  �����������򣬲���Ҫ�ƶ�Ԫ��
//  ����������������ǡ���������ʱ����������Ч�ʵ�����������ʱ��ΪO(n)��
//  ����������������ʱ���ƽ���������ʱ�䶼ΪO(n2)��
// 


// ��������
void insertSort(vector<int> &arr)
{	for (int i = 1; i < arr.size(); i++)
	{
		int tmp = arr[i];
		int j;
		for (j = i-1; j>=0 && tmp < arr[j]; j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[j+1] = tmp;
	}
}

int main()
{
	vector<int> arr = { 48, 62, 35, 77, 55, 14, 35, 98 };

	insertSort(arr);

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	system("pause");
	return 0;
}