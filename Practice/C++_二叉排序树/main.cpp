#include <iostream>


using namespace std;

//����������ͨ�����ö���������Ϊ�洢�ṹ��
//������������������ɵõ�һ�����ݹؼ��ֵ��������У�һ���������п���ͨ������һ�ö������������һ���������У��������Ĺ��̼��Ƕ��������н�������Ĺ��̡�
//ÿ�β�����µĽ�㶼�Ƕ������������µ�Ҷ�ӽ�㣬�ڽ��в������ʱ�������ƶ�������㣬ֻ��Ķ�ĳ������ָ�룬�ɿձ�Ϊ�ǿռ��ɡ�
//���������롢ɾ����ʱ�临�Ӷȵ������ߣ�����O(logn)���O(n)�������������˻������Ա�����б������

typedef struct BiTNode
{
	int data;
	BiTNode *lchild, *rchild;

}BiNode, *BiTree;;


// ����
void insert(BiTNode *&root, int n)
{
	// �����׸��ڵ�
	if (root == NULL)
	{
		
		BiNode *node = new BiTNode();
		node->data = n;
		node->lchild = NULL;
		node->rchild = NULL;
		root = node;
	}
	else
	{
		if (n < root->data)
			insert(root->lchild,n);
		if (n > root->data)
			insert(root->rchild,n);
	}
}

// ��ѯ
bool searchTree(BiNode * root, int n)
{
	BiTNode * pNode = root;

	while (pNode != NULL)
	{
		if (n == pNode->data)
		{
			return true;
		}
		else if (n < pNode->data)
		{
			pNode = pNode->lchild;
		}
		else
		{
			pNode = pNode->rchild;

		}

	}
	if (pNode == NULL)
	{
		return false;

	}
}

// ǰ�����preorder
void preorder(BiNode *root)
{
	if (root != NULL)
	{
		cout << root->data << endl;
		preorder(root->lchild);
		preorder(root->rchild);


	}
}

// �������inorder
void inorder(BiNode *root)
{
	if (root != NULL)
	{
		inorder(root->lchild);
		cout << root->data << endl;
		inorder(root->rchild);
	}
}

// �������postorder
void posorder(BiNode* root)
{
	if (root != NULL)
	{
		posorder(root->lchild);
		posorder(root->rchild);
		cout << root->data << endl;
	}
}


// �ж��Ƿ�Ϊ����������
// ���ݶ�������������������ڵ�ֵ����С���������  ��һ���ڵ�ֵҪ������ֱ��ǰ��Ҫ��
// O��n��
int pre;  // ��¼ĳ�ڵ��ֱ��ǰ������ʼֵΪ������֪������С��һ������
bool JudgeBST(BiNode * root)
{
	bool b1, b2;
	if (root == NULL)
	{
		return true;
	}
	else
	{
		b1 = JudgeBST(root->lchild);
		if (b1 == false || pre >= root->data)
		{
			return false;
		}
		pre = root->data;
		b2 = JudgeBST(root->rchild);
		return b2;
	}
}

// ��������������
// ������Ҫ�����������������ȣ�����������ڵ����ȣ���Ȼ��Ҫʹ�ú������
// �˺�������õ����Ƕ���������������ȣ���Ҫ���������ĸ߶ȣ��ڴ˽���ϼ�1
int treeHeight(BiNode * root)
{
	int left, right;
	if (root == NULL)
	{
		return -1;
	}
	else
	{
		left = treeHeight(root->lchild) + 1;
		right = treeHeight(root->rchild) + 1;
		return (left >= right) ? left: right ;
	}
}

int main()
{

	int a = sizeof(BiNode);
	BiNode * root = NULL;
	int arr[] = {5,3,7,2,4,6,8};
	for (int i = 0; i < sizeof(arr)/4; i++)
	{
		insert(root, arr[i]);
	}
	cout << "����*********************" << endl;
	inorder(root);
	cout << "ǰ��*********************" << endl;
	preorder(root);
	cout << "����*********************" << endl;
	posorder(root);
	cout << "����*********************" << endl;
	bool isFind = searchTree(root, 8);
	cout << isFind << endl;
	cout << "�������*********************" << endl;
	int h = treeHeight(root) + 1;
	cout << h << endl;

	system("pause");
	return 0;

}