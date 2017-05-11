#include <stdio.h>

void swap(int *m, int n);

int main()
{
	int i, x, max, min, m = 0, n = 0;
	int a[10];
	int *p;
	for (i = 0; i <= 9; i++)
		a[i] = scanf("%d", &x);
	for (p = a; p < (a + 10); p++) {
		for (i = 0; i <= 9; i++) {
			if (*p >= a[i])
				m = m + 1;
			if (m == 10) {
				swap(p, a[i]);
				break;
			}
		}
		for (i = 0; i <= 9; i++) {
			if (*p <= a[i])
				n = n + 1;
			if (n == 10) {
				swap(p, a[i]);
				break;
			}
		}
	}
	for (i = 0; i <= 9; i++)
		printf("%d ", a[i]);

	return 0;
}

void swap(int *m, int n)
{
		int t;
		t = *m;
		*m = n;
		n = t;
}




