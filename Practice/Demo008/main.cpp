#include<iostream>
#include<stack>


using namespace std;

typedef struct node
{

	int data;
	node * left;
	node * right;

};

// µÝ¹é
void pre(node * head)
{
	if (head != NULL)
	{
		cout << head->data << endl;
		pre(head->left);
		pre(head->right);

	}

}

// ·ÇµÝ¹é ¡ª¡ªÀûÓÃÕ»
void preNon(node * head)
{
	stack<node*> st;
	node * p = head;
	while (p != NULL || !st.empty())
	{

		while (p != NULL)
		{
			cout << p->data << endl;
			st.push(p);
			p = p->left;
		}
		bool l = st.empty();
		if (!st.empty())
		{
			p = st.top();
			st.pop();
			p = p->right;
		}
	}

}


int main()
{

	node * head = new node();
	head->data = 1;
	
	node *a0 = head;
	node *a1 = new node();
	node *a2 = new node();
	node *a3 = new node();
	node *a4 = new node();
	node *a5 = new node();

	a1->data = 2;
	a2->data = 3;
	a3->data = 4;
	a4->data = 5;
	a5->data = 6;
	
	a0->left = a1;
	a0->right = a2;
	
	a1->left = a3;
	a1->right = a4;
	
	a2->left = a5;
	a2->right = NULL;

	a3->left = NULL;
	a3->right = NULL;

	a4->left = NULL;
	a4->right = NULL;

	a5->left = NULL;
	a5->right = NULL;


	preNon(head);








	stack<int> st;


	system("pause");
	return 0;
}