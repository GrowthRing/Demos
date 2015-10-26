#include <iostream>
using namespace std;

typedef struct node
{

	int data;

	node *next;
};


int main()
{

	node *a = new node();
	node *b = new node();
	node *c = new node();
	node *d = new node();
	node *e = new node();
	a->data = 1;
	b->data = 2;
	c->data = 3;
	d->data = 4;
	e->data = 5;
	a->next = b;
	b->next = c;
	c->next = d;
	d->next = e;
	e->next = NULL;
	node *p1 = a;
	while (p1 != NULL)
	{
		cout << p1->data << endl;
		p1 = p1->next;
	}

	cout << "****************************" << endl;

	node *cur, *p, *q;
	cur = a;
	while (cur->next != NULL)
	{

		p = cur->next;
		q = p->next;
		p->next = a;
		cur->next = q;
		a = p;
	}

	node *p2 = a;
	while (p2 != NULL)
	{
		cout << p2->data << endl;
		p2 = p2->next;
	}

	system("pause");
	return 0;
}
