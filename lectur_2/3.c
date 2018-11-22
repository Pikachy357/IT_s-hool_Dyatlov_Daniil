#include "pch.h"
#include <stdio.h>
int main()
{
	int x, y, n, i;
	printf("\nfulfilled: Dyatlov Daniil\n\n");
	do
	{
		printf("1.cross\n2.hollow diamond\n3.filled diamond\n4.diamond frame\n\nMy choice:");
		i = scanf("%d", &n);
		rewind(stdin);
		switch (n)
		{
		case 1:
			for (y = 1; y <= 5; y++)
			{
				for (x = 1; x <= 5; x++)
				{
					if (y == x || y == -x + 6)
						printf("*");
					else
						printf(" ");
				}
				printf("\n");
			}
			break;
		case 2:
			for (y = 1; y <= 5; y++)
			{
				for (x = 1; x <= 5; x++)
				{
					if (y == x + 2 || y == x - 2 || y == -x + 4 || y == -x + 8)
						printf("*");
					else
						printf(" ");
				}
				printf("\n");
			}
			break;
		case 3:
			for (y = 1; y <= 5; y++)
			{
				for (x = 1; x <= 5; x++)
				{
					if (y <= x + 2 && y >= x - 2 && y >= -x + 4 && y <= -x + 8)
						printf("*");
					else
						printf(" ");
				}
				printf("\n");
			}
			break;
		case 4:
			for (y = 1; y <= 5; y++)
			{
				for (x = 1; x <= 5; x++)
				{
					if (y > x + 2 || y < x - 2 || y < -x + 4 || y > -x + 8)
						printf("*");
					else
						printf(" ");
				}
				printf("\n");
			}
			break;
		default:
			printf("Input Error\n");

		}
	} while (i != 1 || n<1|| n>4);
	return 0;
}