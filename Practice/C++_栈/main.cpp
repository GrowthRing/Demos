#include<iostream>

using namespace std;


typedef struct {
	string name;
	int age;
}Data;

typedef struct lStack{
	Data stu;
	lStack *next;
}LStack;

// ÈëÕ»
void push(LStack *&s, Data data){
	LStack *newNode = new LStack();
	newNode->stu = data;
	newNode->next = s;
	s = newNode;
}


int main()
{
	Data data[] = { { "zhangsan", 12 }, { "lisi", 32 }, { "lili", 23 }, { "hanmeimei", 23 }, { "wangwu", 25 }};
	LStack *stk = NULL;
	for (int i = 0; i < 5; i++)
	{
		push(stk, data[i]);
	}

	return 0;
}
