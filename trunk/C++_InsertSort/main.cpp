#include<iostream>
#include<vector>

using namespace std;

// 【基本思想】
//  1. 即将一个新的数据插入到已经有序的序列中。
//  2. 假设取数组的第一个数为一个序列，那么它是有序的
//  3. 从数组中取出紧接着的下一个数据，插入到之前的有序数列中，并保证其依然有序

// 
// 【具体步骤】
//  1. 
//  2. 
//  3. 
//  4. 
// 
// 【知识点】 
//  稳定
//  空间复杂度O(1) 
//  时间复杂度O(n2) 
//  最差情况：反序，需要移动n*(n-1)/2个元素 
//  最好情况：正序，不需要移动元素
//  数组在已排序或者是“近似排序”时，插入排序效率的最好情况运行时间为O(n)；
//  插入排序最坏情况运行时间和平均情况运行时间都为O(n2)。
// 


// 插入排序
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