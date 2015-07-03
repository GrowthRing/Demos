#include<iostream>
#include<exception>

using namespace std;

class MyException:exception
{
public:
	MyException(string error)
	{
		err_msg = error;
	}
	~MyException(){}

	void ShowErrorMsg()
	{
		cout << err_msg.c_str() << endl; 
	}
private:
	string err_msg;
};


int main()
{
	string name;
	try{
		if (name == "")
			throw MyException("Òì³£ÁË");
	}
	catch (MyException e ){
		e.ShowErrorMsg();
	}

	system("pause");
	return 0;
}