#include <stdio.h>
#define REMAINDER(a, b) (a % b)

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	if (a > b)
		printf("%d", REMAINDER(a, b));
	else
		printf("%d", REMAINDER(b, a));
	return 0;
}