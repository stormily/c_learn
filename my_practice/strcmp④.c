#include <stdio.h>
#include <string.h>

int main()
{
	int x;
	char s1[3], s2[3];
	gets(s1);
	gets(s2);
	printf("%d", strcmp(s1,s2));

	return 0;
}