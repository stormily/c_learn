#include<stdio.h>

int main()
{
	int m = 19, i, a, b;
	for (i = 1; i <= (m + 1) / 2; i++) {
		for (a = 1; a <= (m - (2 * i - 1)) / 2; a++)
			printf(" ");
		for (b = 1; b <= 2 * i - 1; b++)
			printf("*");
		printf("\n");
	}
	for (i = (m - 1) / 2; i >= 1 / 2; i--) {
		for (a = 1; a <= (m - (2 * i - 1)) / 2; a++)
			printf(" ");
		for (b = 1; b <= 2 * i - 1; b++)
			printf("*");
		printf("\n");
	}

	return 0;
}