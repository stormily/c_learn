#include <stdio.h>

int main()
{
	int prime_num(int n);
	int i, a[3], m = 0;
	for (i = 2; i <= 100; i++){
		if (prime_num(i) == 1)
			if (m <= 2) {
				a[m] = i;
				m = m + 1;
			} else {
				  a[0] = a[1];
				  a[1] = a[2];
				  a[2] = i;
			}
	}
	for (i = 0; i <= 2; i++)
		printf("%d\n", a[i]);
	return 0;
}

int prime_num(int n)
{
	int sign = 1, i;
	for (i = 2; i <= n - 1; i++)
		if (n % i == 0) {
			sign = 0;
			break;
		}
	return sign;

}