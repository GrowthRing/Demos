#include<iostream>
#include<vector>
using namespace std;

// 快速排序
void QuickSort(vector<int> &v, int left, int right)
{
	if (left < right)
	{
		int low = left;
		int high = right;
		int tmp = v[low];
		while (low < high)
		{
			while (low < high && v[high] > tmp)
			{
				high--;
			}
			v[low] = v[high];

			while (low < high && v[low] < tmp)
			{
				low++;
			}
			v[high] = v[low];
		}
		v[low] = tmp;
		QuickSort(v,left,low - 1);
		QuickSort(v, low + 1, right);
	}
}


vector<int> TwoSum(vector<int> &v, int target)
{
	vector<int> r;
	//首先对数组进行排序
	QuickSort(v, 0, v.size() - 1);
	int i = 0;
	int j = v.size() - 1;
	while (i < j)
	{
		if (v[i] + v[j] < target)
		{
			i++;
		}
		if (v[i] + v[j] > target)
		{
			j--;
		}
		if (v[i] + v[j] == target)
		{
			break;
		}

	}
	if (i == j )
	{
		r.push_back(-1);
		r.push_back(-1);
	}
	else{
		r.push_back(v[i]);
		r.push_back(v[j]);

	}
	
	//查找
	return r;
}


int main()
{
	
	vector<int> mV = {2, 4, 5, 11, 22, 3, 7, 8, 30};
	vector<int>  arr = { 48, 62, 35, 77, 55, 14, 35, 98 };
	int target = 11;
	vector<int> r = TwoSum(mV,41);
	//QuickSort(mV, 0, mV.size() - 1);
	system("pause");
	return 0;
}