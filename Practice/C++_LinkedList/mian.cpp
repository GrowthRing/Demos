#include<iostream>

using namespace std;

// ����ڵ�
typedef struct node
{
	int num;
	node *next;
}Node;

void printList(Node* s)
{

	Node *p = s;
	while (p != NULL)
	{
		cout << p->num << "  ";
		p = p->next;
	}
}


// ���ӽڵ�


// ɾ���ڵ�


// ��ѯ


// �޸�

int main()
{
	int a[] = { 7, 9, 11, 2, 5, 3 };
	Node *head1 = NULL;  // ͷָ��
	Node *head2 = NULL;  


	// ͷ�巨����>��������
	for (int i = 0; i < 6; i++)
	{
		Node *newNode = new Node();
		newNode->num = a[i];
		newNode->next = head1;
		head1 = newNode;
	}

	// β�巨����>��������
	Node *p;  // ����ָ��
	for (int i = 0; i < 6; i++)
	{
		Node* newNode = new Node();
		newNode->num = a[i];
		if (head2 == NULL)
		{
			newNode->next = head2;
			head2 = newNode;
			p = head2;
		}
		else{
			newNode->next = p->next;
			p->next = newNode;
			p = newNode;
		}


	}
	printList(head2);
	cout << endl;

	// ɾ��ĳ�ڵ�
	Node* p1 = head2;
	Node* q;
	while (p1 != NULL)
	{
		if (p1->num != 2)
		{
			q = p1;
			p1 = p1->next;
		}
		else{
			q->next = p1->next;
			delete(p1);
			break;
		}

	}

	// �����������
	printList(head2);
	cout << endl;

	
	// ����ת
	Node* q1 = head2;
	Node* q2 = q1->next;
	Node* q3;
	while (q2 != NULL)
	{
		q3 = q2->next;
		q2 -> next = q1;
		q1 = q2;
		q2 = q3;
	}
	head2->next = NULL;
	head2 = q1;

	printList(head2);
	cout << endl;

	system("pause");
	return 0;
}