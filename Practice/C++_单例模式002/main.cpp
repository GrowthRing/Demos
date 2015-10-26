#include<iostream>
#include "Tool.h"

using namespace std;



int main()
{
	Tool *t = Tool::getInstance();
	int a = 0;
	
	t->getDescription(1);
	return 0;
}