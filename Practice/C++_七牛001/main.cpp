#include <iostream>

using namespace std;

// ��
// http://blog.csdn.net/xiajun07061225/article/details/8553808
// http://www.cnblogs.com/zhuyf87/archive/2013/01/11/2856715.html


// �󶥶ѵ���
// ��i�ڵ㿪ʼ������һ�εġ��󶥶ѡ�����,��i�����ӽڵ���������������i�ڵ���
// sizeΪ�ڵ�������i�ڵ�����Һ��ӽڵ�����Ϊ 2*i+1�� 2*i+2
void MaxHeapAdjustUp(int a[],int size, int i)
{
	int leftChild = 2 * i + 1;
	int rightChild = leftChild + 1;
	if (a[rightChild] < size && a[leftChild] < a[rightChild])
	{
		leftChild = rightChild;
	}
	if (leftChild < size && a[leftChild] > a[i])
	{
		a[i] = a[i] ^ a[leftChild];
		a[leftChild] = a[leftChild] ^ a[i];
		a[i] = a[i] ^ a[leftChild];
		//a[i] = a[i] + a[leftChild];
		//a[leftChild] = a[i] - a[leftChild];
		//a[i] = a[i] - a[leftChild];

	}
	
}
// �󶥶ѹ���
// ��i��ʼ(���һ��Ҷ�ӽڵ�ĸ��ڵ�)�����丸�ڵ㣬���ڵ�ĸ��ڵ�...�����μ�顢�����Է��ϡ��󶥶ѡ�������
void BuildMaxHeap(int a[], int size)
{
	for (int i = size / 2 - 1; i >= 0; i--)
	{
		MaxHeapAdjustUp(a,size,i);
	}

}

// �򡰴󶥶ѡ�������µ�����
// ÿ�β��붼�ǽ������ݷ����������Ȼ����²������ݿ�ʼ��
// ���丸�ڵ㣬���ڵ�ĸ��ڵ�...�����μ�顢�����Է��ϡ��󶥶ѡ�������
void HeapInsert(int a[], int size, int data)
{
	a[size] = data;
	BuildMaxHeap(a, size + 1);

}


// �ӡ��󶥶ѡ���ɾ������
// ����ÿ�ζ�ֻ��ɾ����0�����ݡ�Ϊ�����ؽ��ѣ������һ�����ݵ�ֵ���������
// Ȼ���ǰsize-1�����ݽ��д󶥶ѵĹ���
void HeapDelete(int a[], int size)
{
	int tmp = a[0];
	a[0] = a[size - 1];
	a[size - 1] = a[0];
	BuildMaxHeap(a, size - 1);

}

int main()
{





	system("pause");
	return 0;

}