#include<iostream>
#include<vector>
using namespace std;

void  quickSort(vector<int> &b, int low, int high)
{
	if (low < high)
	{
		int left = low, right = high;
		int tmp = b[left];
		while (left < right)
		{

			while (left < right && b[right] >= tmp)
				right--;
			b[left] = b[right];
			while (left < right && b[left] < tmp)
				left++;
			b[right] = b[left];
		}
		b[left] = tmp;

		quickSort(b, low, left - 1);
		quickSort(b, left+1, high);


	}


}

int main()
{
	vector<int> a = { 5, 3, 6, 2, 7, 1, 2, 9 };
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;

	quickSort(a, 0, 7);

	for (int  i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}

	system("pause");
	return 0;
}