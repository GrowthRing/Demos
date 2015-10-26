// C �汾
#include <stdlib.h>

void shuffle(int a[], size_t n, unsigned int seed)
{
	srand(seed);
	for (; n > 1; n--)
	{
		unsigned int r = rand() % n;
		int tmp = a[n - 1];
		a[n - 1] = a[r];
		a[r] = tmp;
	}
}

void restore(int a[], size_t n, unsigned int seed)
{
	/* �����ﲹ����� */
	srand(seed);
	int *r, i = n;
	r = (int *)malloc(sizeof(*r) * n);
	for (; i > 1; i--)
	{
		unsigned int t = rand() % i;
		r[i - 1] = t;
	}

	for (i = 2; i <= n; i++)
	{
		int tmp = a[r[i - 1]];
		a[r[i - 1]] = a[i - 1];
		a[i - 1] = tmp;
	}

	free(r);

}

/* ���Գ��� */
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	unsigned int seed;
	unsigned int n;
	unsigned int i;
	int *a, *b;

	scanf("%u", &seed);
	scanf("%u", &n);

	a = (int *)malloc(sizeof *a * n);
	b = (int *)malloc(sizeof *b * n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		b[i] = a[i];
	}

	shuffle(a, n, seed);
	restore(a, n, seed);

	for (i = 0; i < n; i++)
	{
		if (a[i] != b[i])
			break;
	}

	if (i == n)
		printf("Success!\n");
	else
		printf("Failed!\n");

	free(a);
	free(b);
	return 0;
}
