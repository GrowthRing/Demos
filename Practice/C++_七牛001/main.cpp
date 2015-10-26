#include <iostream>

using namespace std;

// 堆
// http://blog.csdn.net/xiajun07061225/article/details/8553808
// http://www.cnblogs.com/zhuyf87/archive/2013/01/11/2856715.html


// 大顶堆调整
// 从i节点开始，进行一次的“大顶堆”调整,将i和其子节点中最大的数调整到i节点上
// size为节点总数，i节点的左右孩子节点依次为 2*i+1， 2*i+2
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
// 大顶堆构建
// 从i开始(最后一个叶子节点的父节点)，到其父节点，父节点的父节点...，依次检查、调整以符合“大顶堆”的性质
void BuildMaxHeap(int a[], int size)
{
	for (int i = size / 2 - 1; i >= 0; i--)
	{
		MaxHeapAdjustUp(a,size,i);
	}

}

// 向“大顶堆”中添加新的数据
// 每次插入都是将新数据放在数组最后，然后从新插入数据开始，
// 到其父节点，父节点的父节点...，依次检查、调整以符合“大顶堆”的性质
void HeapInsert(int a[], int size, int data)
{
	a[size] = data;
	BuildMaxHeap(a, size + 1);

}


// 从“大顶堆”中删除数据
// 堆中每次都只能删除第0个数据。为便于重建堆，将最后一个数据的值赋给根结点
// 然后对前size-1个数据进行大顶堆的构建
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