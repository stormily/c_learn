#include <stdio.h>
#define ODD(n) (n % 2 == 0)

int main()
{
	int n;
	do {
		scanf("%d", &n);    
	} while (ODD(n));
	
	return 0;
}	