#include<iostream>
#include<string>
using namespace std;


// 根据输入的星期首字符判断明天是周几
int main()
{
	string s;
	cin >> s;

	//char t = toupper(s[0]);
	char t = tolower(s[0]);

	switch (t)
	{
	case 'm':
		cout << "Tuesday" << endl;
		break;
	case 't':
	{
		char tt = tolower(s[1]);
		if (tt == 'u')
		{
			cout << "Wednesday" << endl;
		}
		else if (tt == 'h')
		{
			cout << "Friday" << endl;
		}
		else{
			cout << "Invalid input" << endl;
		}
		break;
	}
	case 'w':
		cout << "Thursday" << endl;
		break;

	case 'f':
		cout << "Saturday" << endl;
		break;

	case 's':
	{
		char tt = tolower(s[1]);
		if (tt == 'a')
		{
			cout << "Sunday" << endl;
		}
		else if (tt == 'u')
		{
			cout << "Monday" << endl;
		}
		else{
			cout << "Invalid input" << endl;
		}
		break;
	}
	default:
		cout << "Invalid input" << endl;
		break;
	}




	system("pause");
	return 0;


}


