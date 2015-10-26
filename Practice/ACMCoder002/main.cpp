#include<stdio.h>
int main()
{

	int a, b;
	//scanf("%d%d", &a, &b);
	while (scanf("%d%d", &a, &b) != EOF)
	{
		printf("%d\n", a + b);
	}
}

