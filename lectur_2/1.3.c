#include "pch.h"
#include <stdio.h>
#include <stdbool.h>
int main()
{
	bool a = true;
	bool b = false;
	printf("\nfulfilled: Dyatlov Daniil\n\n");
	printf("true =%d\n", a);
	printf("false =%d\n", b);
	printf("true+false =%d\n", a + b);
	printf("true-false =%d\n", a - b);
	printf("false-true =%d\n", b - a);
	printf("false*true =%d\n", b*a);
	printf("true*true =%d\n", a*a);
	printf("false*false =%d\n", b*b);
	printf("false/true =%d\n", b / a);
	printf("true/false = error");
	return 0;
}

