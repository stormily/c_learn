#include <stdio.h>
#include <cstdlib>
int main()
{
	int ch;
	int sign = 0;

	while ((ch = getchar()) != EOF) {
		if (ch == '{')
			sign = sign + 1;
		if (ch == '}')
			sign = sign - 1;


	}
	if (sign != 0)
		printf("All braces matching success\n");
	else
		printf("There are %d no match in curly braces\n", sign);

	return EXIT_SUCCESS;
}

