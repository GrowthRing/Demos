#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{

	int n = 0;
	vector<string> vs;
	int m;
	cin >> m;
	while (n < m)
	{
		string tmps;
		cin >> tmps;
		vs.push_back(tmps);
		n++;
	}

	vector< vector<char> > vcs;

	for (int i = 0; i < vs.size(); i++)
	{
		string stmp = vs[i];
		vector<char> vc;
		for (int j = 0; j < stmp.length(); j++)
		{
			if (stmp[j] =='#')
			{
				vc.pop_back();
			}
			else if (stmp[j] == '@')
			{
				vc.clear();
			}
			else
			{
				vc.push_back(stmp[j]);
			}
		}
		vcs.push_back(vc);
	}

	for (int i = 0; i < vcs.size(); i++)
	{
		for (int j = 0; j < vcs[i].size(); j++)
		{					  
			cout << vcs[i][j];
		}¡¡
		cout << endl;
		
	}

	
	system("pause");
	return 0;


}
