#include <iostream>
#include <vector>
using namespace std;


int main(){
	int n;
	while (cin >> n){
		int s = 1; // �ɼ�
		int up = 0; // �ܵ��Ƕ�
		int down = 0;  // �ܵĽ���

		down = -1 * (n -1)/ 2; // �ܹ����ˣ�n/2)��
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