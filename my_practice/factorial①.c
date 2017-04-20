#include <stdio.h>

int main()
{
	int factorial(int n);
	int m, n, result；
	scanf("%d%d", &m, &n);
	result = factorial(m) / (factorial(n)*factorial(m - n));
	printf("%d", result);
}

int factorial(int n)
{
	int i, product = 1;
	for (i = 1; i <= n; i++)
		product = product * i;
	return product;
}