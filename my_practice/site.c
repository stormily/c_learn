#include <stdio.h>

int *max(int m, int n);
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", *max(a, b));
	return 0;
}

int *max(int m, int n)
{
	int max;
	int *p;
	*p = max;
	if (m > n)
		max = m;
	else
		max = n;
	return p;
}