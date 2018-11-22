#include "pch.h"
#include <stdio.h>
unsigned int mask = 1;
unsigned int zip(unsigned int n)
{
	int i;
	unsigned int mask1 = 0, mask2 = 0;
	for (i = 0; i <= 31; i += 2)
	{
		if (n & (mask << i))
		{
			mask1 = mask1 | (mask << i);
		}
	}
	for (i = 1; i <= 31; i += 2)
	{
		if (n & (mask << i))
		{
			mask2 = mask2 | (mask << i);
		}
	}
	return (mask1 << 1) | (mask2 >> 1);
}

int main()
{
	printf("\nfulfilled: Dyatlov Daniil\n\n");
	int j;
	unsigned int t = 0;
	scanf("&ud", &t);
	for (j = 31; j >= 0; j--)
	{
		if (t & (mask << j))
			printf("1");
		else
			printf("0");
	}
	printf("\n");

	for (j = 31; j >= 0; j--)
	{
		if (zip(t) & (mask << j))
			printf("1");
		else
			printf("0");
	}
	printf("\n");

	return 0;
}