#include <stdio.h>

int main()
{
	int a[9], b[3][3];
	int i, j, x;
	for (i = 0; i <= 8; i++) {
		scanf("%d", &x);
		a[i] = x;
	}
	for (i = 0; i <= 2; i++)
		for (j = 0; j <= 2; j++)
			b[i][j] = a[i + j];

	return 0;

}