#include<iostream>

using namespace std;

// 链表节点
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


// 增加节点


// 删除节点


// 查询


// 修改

int main()
{
	int a[] = { 7, 9, 11, 2, 5, 3 };
	Node *head1 = NULL;  // 头指针
	Node *head2 = NULL;  


	// 头插法——>创建链表
	for (int i = 0; i < 6; i++)
	{
		Node *newNode = new Node();
		newNode->num = a[i];
		newNode->next = head1;
		head1 = newNode;
	}

	// 尾插法——>创建链表
	Node *p;  // 辅助指针
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

	// 删除某节点
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

	// 遍历输出链表
	printList(head2);
	cout << endl;

	
	// 链表反转
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