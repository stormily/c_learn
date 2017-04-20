#include <stdio.h>

int main()
{
	int average_sum(int n, int a[3][3]);
	int average_single(int n, int a[3][3]);
	int a[3][3], aver_sum, aver_single, i, j, x, n, sum = 0;
	for (i = 0; i <= 2; i++)
		for (j = 0; j <= 2; j++) {
			x = scanf("%d", &x);
			a[i][j] = x;
		}
	for (n = 1; n <= 3; n++) {
		aver_sum = average_sum(n, a[3][3]);
		printf("the average of the %d student's grade = %d\n", n, aver_sum);
	}
	for (n = 1; n <= 3; n++) {
		aver_single = average_single(n, a[3][3]);
		printf("the average of the %d subject's grade = %d\n", n, aver_single);
	}
	return 0;
}

int average_sum(int n, int a[3][3])
{
	int j, sum = 0, aver_sum;
	n = n - 1;
	for (j = 0; j <= 2; j++)
			sum = sum + a[j][n];
	aver_sum = sum / 3;
	return aver_sum;
}

int average_single(int n, int a[3][3])
{
	int j, sum = 0, aver_single;
	n = n - 1;
	for (j = 0; j <= 2; j++)
		sum = sum + a[n][j];
	aver_single = sum / 3;
	return aver_single;
}