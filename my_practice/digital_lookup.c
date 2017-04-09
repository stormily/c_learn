#include <stdio.h>

int main()
{
	int a[10] = {1, 34, 2, 53, 63, 45, 34, 45, 23, 4};
	int b, n, i;
	scanf("%d", &b);
	for (i = 0; i <= 9; i++){
		if (b == a[i]) {
			n = i+1;
			break;
		}
	}
	printf("%d\n", n);
	return 0;
}