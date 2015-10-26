#include <iostream>
#include <string>

using namespace std;
// 加减乘除

int main()
{
	try
	{
		string strNumberA, strNumberB, strResult;
		char strOperate;
		float result;

		cout << "请输入数字A:" << endl;
		cin >> strNumberA;
	
		cout << "请选择运算符号 + - * /：" << endl;
		cin >> strOperate;

		cout << "请输入数字B:" << endl;
		cin >> strNumberB;

		switch (strOperate)
		{
		case '+':
			result = atof(strNumberA.c_str()) + atof(strNumberB.c_str());
			break;
		case '-':
			result = atof(strNumberA.c_str()) - atof(strNumberB.c_str());
			break;
		case '*':
			result = atof(strNumberA.c_str()) * atof(strNumberB.c_str());
			break;
		case '/':
			if (atof(strNumberB.c_str()) != 0)
			{
				result = atof(strNumberA.c_str()) / atof(strNumberB.c_str());

			}
			else
			{
				strResult = "分母不能为0！";
			}
			break;
		default:
			cout << "输入的运算符有错！！" << endl;
			break;
		}

		char tmp[255];
		sprintf_s(tmp, "%f", result);
		strResult = tmp;
		cout << strResult << endl;
	

	}
	catch(exception e)
	{
		cout << "输入有错！！" << endl;
	}

	system("pause");
	return 0;
}