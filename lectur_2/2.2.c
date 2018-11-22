#include "pch.h"
#include <stdio.h>
int main()
{
	int x, i;
	i = 0;
	printf("\nfulfilled: Dyatlov Daniil\n\n");
	do
	{
		printf("insert the number:");
		i = scanf("%d", &x);
		rewind(stdin);
		if (i != 1) { printf("Input Error\n"); }
	} while (i != 1);
	i = 0;
	while (x != 0)
	{
		x /= 10;
		i++;
	}
	printf("number of tens = %d", i);
	return 0;
}
