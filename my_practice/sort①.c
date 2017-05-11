#include <stdio.h>

void exchange(int *x, int *y, int *z);
void swap(int *m, int *n);

int main()
{
	int a, b, c;
	int *x, *y, *z;
	scanf("%d%d%d", &a, &b, &c);
	x = &a; y = &b; z = &c;
	exchange(x, y, z);
	printf("%d,%d,%d\n", a, b, c);
	
	return 0;

}

void exchange(int *x, int *y, int *z)
{
	if (*x > *y)
		swap(x, y);
	if (*y > *z)
		swap(y, z);
	if (*x > *z)
		swap(x, z);
}

void swap(int *m, int *n)
{
	int t;
	t = *m;
	*m = *n;
	*n = t;
}
