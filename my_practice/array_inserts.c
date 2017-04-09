#include <stdio.h>

int main()
{
	int i, b, n;
	int a[10];
	for (i = 0; i <= 8; i++)
		a[i] = i*3;
	scanf("%d", &b);
	for (i = 0; i <= 9; i++) {
		if (b <= a[i]) {
			for (n = 8; n > i; n--)
				a[n + 1] = a[n];
			a[i + 1] = a[i];
			a[i] = b;
			break;
		}
		else {
			a[9] = b;
		｝
	}
	for (i = 0; i <= 9; i++)
		printf("%d\n", a[i]);
	return 0;
}