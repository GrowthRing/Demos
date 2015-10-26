#include<iostream>

using namespace std;

// 最大子串和   --> 动态规划

// 问题：
// 给定n个整数（可能为负数）组成的序列a[1],a[2],a[3],…,a[n],它的子串为a[i…j]，求该序列如a[i]+a[i+1]+…+a[j]的子段和的最大值。
// 当所给的整均为负数时定义子段和为0，依此定义，所求的最优值为：
// Max{ 0, a[i] + a[i + 1] + … + a[j] }, 1 <= i <= j <= n
// 例如，当（a1, a2, a3, a4, a4, a6） = (-2, 11, -4, 13, -5, -2)时，最大子段和为20。


// 方法一：暴力破解  O(n2)
int maxSum1(int *a, int n, int *left, int *right)
{
	int maxSum = a[0];
	for (int i = 0; i < n; i++)
	{
		int thisSum = 0;
		for (int j = i; j < n; j++)
		{
			thisSum += a[j];
			if (thisSum > maxSum)
			{
				maxSum = thisSum;
				*left = j;
				*right = i;
			}
		}
	}
	return maxSum;
}

// 方法二：动态规划  O(n)
// 定义一个状态数组b[j] = {a[i]+a[i+1]+...+a[j]},1<i<j<n，则所求的最大字段和只能存在于b[j]中了，即max(b[j]),理解了这个就基本掌握思路了。
// 假设已知当前状态b[j-1],即目前最大子串含有a[j-1]，下一状态应判断如何取舍a[j]，那如何取舍呢？
// 当然是取b[j-1]+a[j]和a[j]中较大的一个，很容易理解，因为如果加上了一个反而值更小了，那么肯定不是当前最大的子串了，也就不可能是最终的子串
// 即b[j] = max{b[j-1]+a[j],a[j]},要判断b[j-1]+a[j]和a[j]哪个大，就看b[j-1]的正负了。
// 得到
// 总之，思路就是最大子串存在于b[j]中。

int maxSum2(int *a, int n)
{
	int maxSum = 0;
	int b = 0;
	for (int j = 0; j < n; j++)
	{
		if (b>0)  
			b += a[j];  
		else
			b = a[j];
		if (maxSum < b)
			maxSum = b;
	}
	return maxSum;
}



int main()
{
	int a[] = { -2, 11, -4, 13, -5, -2};
	int left = 0, right = 0;
	int maxS = maxSum1(a,6, &left, &right);
	int maxSS = maxSum2(a, 6);

	return 0;
}