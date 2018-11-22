#include "pch.h"
#include <stdio.h>
int main()
{
	float i;
	printf("\nfulfilled: Dyatlov Daniil\n\n");
	printf("   t(F)      t(R)\n");
	for (i = -5; i <= 5; i += 0.15)
	{
		printf("  %-9.2f%6.2f\n", i*9.0 / 5 + 32, i*4.0 / 5);
	}
	return 0;
}
