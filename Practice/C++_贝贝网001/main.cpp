using namespace std;
#include <iostream>
int main(){
	//sample input and output:
	float n, c;
	int m, r;

	cin >> n >> c >> m;
	int buyNum = n / c;
	int freeNum = buyNum / m;

	cout << buyNum + freeNum << endl;
	////////////////////////////////////


		//int i, m, k;

		//cin >> m;
		//k = sqrt(m);
		//for (i = 2; i <= k; i++)
		//if (m%i == 0) break;
		//if (i > k)
		//	cout << "yes" << endl;
		//else
		//	cout <<  "no" << endl;






	return 0;
}