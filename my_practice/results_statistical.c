#include <stdio.h>

int main()
{
	int a[10];
	int m, max, min, average, i, t = 0, sum = 0;
	for (i = 0; i <= 9; i++) {
		scanf("%d", &m);
		a[i] = m;
		sum = sum + a[i];
	}
	average = sum / 10;
	max = a[0];
	min = a[0];
	for (i = 0; i <= 9; i++) {
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
		if (a[i] >= average)
			t++;
	}
	printf("the hightest score=%d\n", max);
	printf("the lowest score=%d\n", min);
	printf("the number of above average=%d\n", t);
	return 0;
}