#include <iostream>
#include <stack>

using namespace std;

// ��ջ���������뵽ջ��
void insertStackBottom(stack<int> &s , int bottom)
{
	if (s.empty())
	{
		s.push(bottom);
		return;
	}

	int top = s.top();
	s.pop();
	insertStackBottom(s, bottom);
	
	s.push(top);
}


// ����

void reverseStack(stack<int> &s, int length)
{
	if (length == 1)
	{
		return;
	}

	int top = s.top();
	s.pop();
	length--;
	reverseStack(s,length);
	insertStackBottom(s, top);

}


int main()
{

	stack<int> s;
	for (int i = 1; i < 6; i++)
	{
		s.push(i);
	}

	//int n = s.size();
	//for (int i = 0; i < n; i++)
	//{
	//	cout << s.top() << endl;
	//	s.pop();
	//}

	//stack<int> _s;

	//int n = s.size();
	//for (int i = 0; i < n; i++)
	//{
	//	_s.push(s.top());
	//	s.pop();
	//}
	//insertStackBottom(s, s.top());
	//s.pop();
	
	reverseStack(s, s.size());
	system("pause");
	return 0;


}
