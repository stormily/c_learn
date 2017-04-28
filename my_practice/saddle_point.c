#include <stdio.h>

int main()
{
	int a[3][3];
	int i, j, x, m, n, saddle_point;
	int sign1 = 0, sign2 = 0;
	for (i = 0; i <= 2; i++)
		for (j = 0; j <= 2; j++) {
			scanf("%d", &x);
			a[i][j] = x;
		}
	for (i = 0; i <= 2; i++)
		for (j = 0; j <= 2; j++) {
			saddle_point = a[i][j];
			sign1 = 0, sign2 = 0;
			for (m = 0; m <= 2; m++)
				if (saddle_point >= a[i][m])
					sign1 = sign1 + 1;
			if (sign1 == 3) {
				for (n = 0; n <= 2; n++)
					if (saddle_point <= a[n][j])
						sign2 = sign2 + 1;
				if (sign2 == 3)
					printf("%d is a saddle point\n", saddle_point);
			}
		}
	return 0;

}