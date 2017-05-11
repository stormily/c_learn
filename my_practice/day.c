#include <stdio.h>
#include <string.h>

int main()
{
	char * day[] = { "Monday", "Thesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	int n;
	scanf("%d", &n);
	if (n <= 7)
		printf("%s\n", day[n - 1]);
	else
		printf("error");
	return 0;
}