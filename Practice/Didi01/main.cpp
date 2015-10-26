#include <iostream>

using namespace std;
int main()
{
	int array[3][5] = { { 1, 2, 0, 3, 4 }, { 2, 3, 4, 5, 1 }, { 1, 1, 5, 3, 0 } };

	int maxsofar = 0;
	int sum;
	for (int i = 0; i < 4;i++)
	{
		for (int j = 0; j < 2; j++)
		{
				sum = array[i][j] + array[i][j + 1] + array[i + 1][j] + array[i+1][j+1];
				if (sum > maxsofar)
				{
					maxsofar = sum;
				}

		}
	}

	cout << maxsofar;
	system("pause");
	return 0;
}



//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void main()
//{
//	vector<int> vecNum;
//	int iNum;
//	int startIndex = 0, endIndex = -1;
//	int startIndex_ = 0, endIndex_ = -1;
//	int currentSum = 0;
//	while (cin >> iNum)
//	{
//		vecNum.push_back(iNum);
//	}
//
//	for (int i = 0; i < vecNum.size(); i++)
//	{
//		for (int j = i; j < vecNum.size(); j++)
//		{
//			currentSum += vecNum[j];
//			if (currentSum == 0)
//			{
//				startIndex = i;
//				endIndex = j;
//			}
//
//		}
//		if (endIndex - startIndex > endIndex_ - startIndex_)
//		{
//			startIndex_ = startIndex;
//			endIndex_ = endIndex;
//		}
//		currentSum = 0;
//	}
//	for (int i = startIndex_; i < endIndex_ + 1; i++)
//		cout << vecNum[i] << " ";
//	cout << endl;
//}