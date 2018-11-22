#include "pch.h"
#include <stdio.h>
int main()
{
	printf("\nfulfilled: Dyatlov Daniil\n\n");
	printf("5/2*1.3=%f -wrong\n", 5 / 2 * 1.3);
	printf("(float)5/2*1.3=%f -right\n", (float)5 / 2 * 1.3);
	printf("5.0/2*1.3=%f -right\n", 5.0 / 2 * 1.3);
	return 0;
}
