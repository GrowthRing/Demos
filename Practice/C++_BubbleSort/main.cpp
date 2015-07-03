#include<iostream>
#include<vector>
using namespace std;

// 【基本思想】
//  1. 从前往后比较相邻的两个数，如果前面的数大于后面的数，就把这两个数的为止互换
//  2. 这样一次遍历后，最大的数就排在了最后
//  3. 然后依次重复对剩下的数据进行相同的操作，直到完成为止

// 
// 【具体步骤】
//  1. 
//  2. 
//  3. 
//  4. 

// 【知识点】 
//  时间复杂度：O(n^2)
//    冒泡排序耗时的操作有：比较 + 交换（每次交换两次赋值）。时间复杂度如下：
//    1) 最好情况：序列是升序排列，在这种情况下，需要进行的比较操作为（n-1）次。交换操作为0次。即O(n)
//    2) 最坏情况：序列是降序排列，那么此时需要进行的比较共有n(n-1)/2次。交换操作数和比较操作数一样。即O(n^2)
//    3) 渐进时间复杂度（平均时间复杂度）：O(n^2)
//  空间复杂度：O(1)
//    从实现原理可知，冒泡排序是在原输入数组上进行比较交换的（称“就地排序”），所需开辟的辅助空间跟输入数组规模无关，所以空间复杂度为：O(1)
//  稳定性
//    冒泡排序是稳定的，不会改变相同元素的相对顺序。
//  
//  
//  
//  





// 冒泡排序
void bubbleSort(vector<int> &arr)
{
	bool isSorted = false;  // 设置一个标志来判断是否有序
	for (int i = arr.size() - 1; i >= 0 ; i--)
	{
		// 如果一次循环没有发生交换，则说明剩余的元素是有序的
		isSorted = true;
		// 每循环完一次，冒泡的一个最大值
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				// 相邻两个元素比较，将较大的交换到右边arr[j+1]中
				int tmp = arr[j+1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
				isSorted = false;
			}
		}
		if (isSorted)
		{
			break;
		}
	}
}



int main()
{
	vector<int>  arr = { 48, 62, 35, 77, 55, 14, 35, 98 };
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	bubbleSort(arr);
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << "\t";
	}
	system("pause");
	return 0;
}