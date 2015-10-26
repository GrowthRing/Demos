#include <iostream>
#include <vector>
using namespace std;


int main(){
	int n;
	while (cin >> n){
		int s = 1; // 股价
		int up = 0; // 总的涨额
		int down = 0;  // 总的降额

		down = -1 * (n -1)/ 2; // 总共降了（n/2)天
		if ((n-1)%2 == 0)
		{
			for (int i = 0; i <= (n-1)/2 ; i++)
			{
				up += i;
			}

		}
		else
		{
			for (int i = 0; i <= (n - 1) / 2 - 1; i++)
			{
				up += i;
			}
		}

		s += up + down;
		cout << s << endl;

	}

	return 0;


}