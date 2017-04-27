#include <stdio.h> 
#include <stdlib.h> 
int main()
{
	int n1, n2;
	int **m, i, j;
	scanf("%d", &n1);
	scanf("%d", &n2);
	m = (int**)malloc(n1 * sizeof(int*)); //第一维 
	for (i = 0; i<n1; i++)
	{
		m[i] = (int*)malloc(n2 * sizeof(int));//第二维 
	}
	for (i = 0; i<n1; i++){
		for (j = 0; j<n2; j++){
			if ((i == j) || (i + j == n1 - 1))
				m[i][j] = 1;
			else
				m[i][j] = 0;
			printf("%d\t", m[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i<n1; i++)
	{
		free(m[i]);//释放第二维指针 
	}
	free(m);//释放第一维指针 
	return 0;
}