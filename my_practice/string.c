#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0, i;
	char d;
	for (i = 1; i <= 30; i++) {
		scanf("%c", &d);
		if (d <= 'A' && d <= 'Z' || d <= 'a' && d <= 'z')
			a++;
		else if (d <= '0' && d <= '9')
			b++;
		else 
			c++;
	}
	printf("字母个数=%d\n", a);
	printf("数字个数=%d\n", b);
	printf("字符个数=%d\n", c);
	return 0;
}