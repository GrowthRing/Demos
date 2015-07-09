#include <iostream>


using namespace std;

//二叉排序树通常采用二叉链表作为存储结构。
//中序遍历二叉排序树可得到一个依据关键字的有序序列，一个无序序列可以通过构造一棵二叉排序树变成一个有序序列，构造树的过程即是对无序序列进行排序的过程。
//每次插入的新的结点都是二叉排序树上新的叶子结点，在进行插入操作时，不必移动其它结点，只需改动某个结点的指针，由空变为非空即可。
//搜索、插入、删除的时间复杂度等于树高，期望O(logn)，最坏O(n)（数列有序，树退化成线性表，如右斜树）。

typedef struct BiTNode
{
	int data;
	BiTNode *lchild, *rchild;

}BiNode, *BiTree;;


// 插入
void insert(BiTNode *&root, int n)
{
	// 创建首个节点
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

// 查询
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

// 前序遍历preorder
void preorder(BiNode *root)
{
	if (root != NULL)
	{
		cout << root->data << endl;
		preorder(root->lchild);
		preorder(root->rchild);


	}
}

// 中序遍历inorder
void inorder(BiNode *root)
{
	if (root != NULL)
	{
		inorder(root->lchild);
		cout << root->data << endl;
		inorder(root->rchild);
	}
}

// 后序遍历postorder
void posorder(BiNode* root)
{
	if (root != NULL)
	{
		posorder(root->lchild);
		posorder(root->rchild);
		cout << root->data << endl;
	}
}


// 判断是否为二叉排序树
// 根据二叉排序树的中序遍历节点值是由小到大排序的  即一个节点值要比他的直接前驱要大
// O（n）
int pre;  // 记录某节点的直接前驱，初始值为其中已知树中最小的一个整数
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

// 计算二叉树的深度
// 由于需要先求出左右子树的深度，才能求出根节点的深度，显然需要使用后序遍历
// 此函数计算得到的是二叉树的子树的深度，若要求整个树的高度，在此结果上加1
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
	cout << "中序*********************" << endl;
	inorder(root);
	cout << "前序*********************" << endl;
	preorder(root);
	cout << "后序*********************" << endl;
	posorder(root);
	cout << "查找*********************" << endl;
	bool isFind = searchTree(root, 8);
	cout << isFind << endl;
	cout << "计算深度*********************" << endl;
	int h = treeHeight(root) + 1;
	cout << h << endl;

	system("pause");
	return 0;

}