#include<iostream>

using namespace std;

// ����Ӵ���   --> ��̬�滮

// ���⣺
// ����n������������Ϊ��������ɵ�����a[1],a[2],a[3],��,a[n],�����Ӵ�Ϊa[i��j]�����������a[i]+a[i+1]+��+a[j]���Ӷκ͵����ֵ��
// ������������Ϊ����ʱ�����Ӷκ�Ϊ0�����˶��壬���������ֵΪ��
// Max{ 0, a[i] + a[i + 1] + �� + a[j] }, 1 <= i <= j <= n
// ���磬����a1, a2, a3, a4, a4, a6�� = (-2, 11, -4, 13, -5, -2)ʱ������Ӷκ�Ϊ20��


// ����һ�������ƽ�  O(n2)
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

// ����������̬�滮  O(n)
// ����һ��״̬����b[j] = {a[i]+a[i+1]+...+a[j]},1<i<j<n�������������ֶκ�ֻ�ܴ�����b[j]���ˣ���max(b[j]),���������ͻ�������˼·�ˡ�
// ������֪��ǰ״̬b[j-1],��Ŀǰ����Ӵ�����a[j-1]����һ״̬Ӧ�ж����ȡ��a[j]�������ȡ���أ�
// ��Ȼ��ȡb[j-1]+a[j]��a[j]�нϴ��һ������������⣬��Ϊ���������һ������ֵ��С�ˣ���ô�϶����ǵ�ǰ�����Ӵ��ˣ�Ҳ�Ͳ����������յ��Ӵ�
// ��b[j] = max{b[j-1]+a[j],a[j]},Ҫ�ж�b[j-1]+a[j]��a[j]�ĸ��󣬾Ϳ�b[j-1]�������ˡ�
// �õ�
// ��֮��˼·��������Ӵ�������b[j]�С�

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