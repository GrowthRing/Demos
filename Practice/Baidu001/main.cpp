#include <iostream>
#include<vector>
using namespace std;

int t = 0;

void search(int (*a)[3], int m, int n, int curM, int curN)
{
	if (curM == m - 1 && curN == n - 1)
	{
		t++;
		return;
	}

	if (a[m-1-curM][curN])
	{
		search(a,m,n,curM+1,curN);
		search(a, m, n, curM, curN + 1);
		search(a, m, n, curM + 1, curN + 1);

	}

}


int main()
{

	int m, n;
	
	cout << "请输入行和列：" << endl;
	cin >> m >> n;
	m = 3;
	n = 3;
	int a[3][3];
	cout << "请输入矩阵：" << endl;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}

	search(a, 3, 3, 7, 3);

	cout << "t = "<< t;
	system("pause");
	return 0;
}
