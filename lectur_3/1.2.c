#include "pch.h"
#include <stdio.h>
unsigned int mask = 1;
unsigned int shift_R(unsigned int n, int k)
{
	int i;
	unsigned int r;
	for (i = 1; i <= k; i += 1)
	{
		r = 0;
		if (n & mask)
			r = 1;
		n = n >> 1;
		n = n | (r << 31);
	}
	return n;
}

int main()
{
	int j, c, x;
	unsigned int t;
	printf("\nfulfilled: Dyatlov Daniil\n\n");
	do
	{
		printf("insert the number and step:");
		c = scanf("%u", &t);
		c = scanf("%d", &x);
		if (c != 1)
		{
			printf("Input error\n");
			rewind(stdin);
		}
	} while (c != 1);
	printf("number entered(2):");
	for (j = 31; j >= 0; j--)
	{
		if (t & (mask << j))
			printf("1");
		else
			printf("0");
	}
	printf("\n");
	printf("shifted number(2):");
	for (j = 31; j >= 0; j--)
	{
		if (shift_R(t, x) & (mask << j))
			printf("1");
		else
			printf("0");
	}
	printf("\n");
	printf("shifted number(10):%u\n", shift_R(t, x));
	return 0;
}