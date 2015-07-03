#include<iostream>
#include<vector>
using namespace std;


// 【基本思想】
//  1. 首先从数列中选取一个数作为基准数
//  2. 然后将数列中的数据进行分区，比基准数大的放在它的后面，比基准数小的放在它的前面
//  3. 接着对前后两个区间分别使用第二步的方法进行分区，直到各个区间只有一个数为止

// 
// 【具体步骤】
//  1. 首先定义两个指针i和j，分别指向数列的首尾
//  2. 然后取出第一个数作为基准数，与指针j所指向的数据进行比较，若比基准数大，则j向前挪动一位，若比基准数小，则将j所指的数据放在i的位置
//  3. 接着i向前挪动一位，将基准数与i所指的数据进行比较，若比基准数小，则i向后移动一位，若比基准数大，则将i所指的数据放在j所指的位置，j再向前移动一位，取数据与基准数比较，不断重复，直到i+1=j为止，此时将数据分为了两个区间
//  4. 之后，将分开的前后两段数据依次进行前面的操作，直到每个区间只有一个数为止
// 
// 【知识点】 
//  O(N*logN)
//  不稳定排序
//  快速排序每次将待排序数组分为两个部分，在理想状况下，每一次都将待排序数组划分成等长两个部分，则需要log2n次划分。
//  而在最坏情况下，即数组已经有序或大致有序的情况下，每次划分只能减少一个元素，快速排序将不幸退化为冒泡排序，所以快速排序时间复杂度下界为O(nlogn)，最坏情况为O(n ^ 2)。
//  在实际应用中，快速排序的平均时间复杂度为O(nlogn)。
//  快速排序在对序列的操作过程中只需花费常数级的空间。空间复杂度S(1)。
//  但需要注意递归栈上需要花费最少logn最多n的空间
// 




// 快速排序
void QucikSort(vector<int> &arr, int low, int high)
{

	if (low < high)
	{
		int left = low;
		int right = high;
		int key = arr[left];
		while (left < right)
		{

			while (left < right && arr[right] >= key)
				right--;
			arr[left] = arr[right];

			while (left < right &&  arr[left] < key)
				left++;
			arr[right] = arr[left];
		
		}
		arr[left] = key;

		QucikSort(arr, low, left - 1);
		QucikSort(arr, left + 1, high);


	}
	else{
		int p = 0;
	}

}


int main()
{
	vector<int>  arr = { 48, 62, 35, 77, 55, 14, 35, 98 };
	vector<int> mV = { 2, 4, 5, 11, 22, 3, 7, 8, 30 };



	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;

	QucikSort(mV, 0, mV.size() - 1);

	for (int i = 0; i < mV.size(); i++)
	{
		cout << mV[i] << "  ";
	}






	//cout << "HelloWorld!" << endl;
	//char *c1 = "0123456789";
	//char c2[] = "0123456789";
	//cout << "char *c1 = 0123456789--> \t sizeof(c1) \t" << sizeof(c1)  << endl;  // 4
	//cout << "char *c1 = 0123456789--> \t strlen(c1) \t" << strlen(c1) << endl;  // 因为不是以'\0'结尾 所以报错
	//cout << "char *c1 = 0123456789--> \t sizeof(*c1) \t" << sizeof(*c1) << endl;  // 1  因为是*cc1  = '0'
	//cout << "char c2[] = 0123456789--> \t sizeof(c2) \t" << sizeof(c2) << endl;  // 11
	//cout << "char c2[] = 0123456789--> \t strlen(c2) \t" << strlen(c2) << endl;  // 10
	system("pause");
	return 0;
}