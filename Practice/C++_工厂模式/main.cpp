#include <iostream>
#include <string>

using namespace std;
// �Ӽ��˳�

int main()
{
	try
	{
		string strNumberA, strNumberB, strResult;
		char strOperate;
		float result;

		cout << "����������A:" << endl;
		cin >> strNumberA;
	
		cout << "��ѡ��������� + - * /��" << endl;
		cin >> strOperate;

		cout << "����������B:" << endl;
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
				strResult = "��ĸ����Ϊ0��";
			}
			break;
		default:
			cout << "�����������д���" << endl;
			break;
		}

		char tmp[255];
		sprintf_s(tmp, "%f", result);
		strResult = tmp;
		cout << strResult << endl;
	

	}
	catch(exception e)
	{
		cout << "�����д���" << endl;
	}

	system("pause");
	return 0;
}