#include <stdio.h>

int main()
{
	int a[3][4];
	int i, j, aver, sum, x;
	int(*p)[4];
	p = a;

	for (i = 0; i <= 2; i++)
		for (j = 0; j <= 3; j++) {
			scanf("%d", &x);
			a[i][j] = x;
		}

	for (i = 0; i <= 2; i++) {
		for (sum = 0, j = 0; j <= 3; j++)
			sum = sum + *(*(p + i) + j);
		aver = sum / 4;
		printf("第%d个学生的平均分为%d\n", i + 1, aver);
		for (j = 0; j <= 3; j++)
			if (*(*(p + i) + j) <= 60) {
				printf("第%d个学生存在不及格\n", i + 1);
				break;
			}
	}

	return 0;	

	
}