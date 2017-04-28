#include <stdio.h>
#define MAX(a,b) (a > b ? a : b)
#define MAX1(a,b,c) (max(a,b) > c ? max(a,b) : c)

int main()
{
	int a, b, c;
	scanf("%d%d%d", &a,&b,&c);
	printf("%d\n", MAX(a, b));
	printf("%d\n", MAX1(a, b, c));

	return 0;

}