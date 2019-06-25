#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints n to 98
 *
 * Return: value of last digit
 * @n:input n
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%d", n);
				printf(",");
				printf(" ");
			}
			else
				printf("%d", n);
			n++;
		}
	}
	else if (n == 98)
		printf("98");
	else
	{
		while (n >= 98)
		{
			if (n != 98)
			{
				printf("%d", n);
				printf(",");
				printf(" ");
			}
			else
				printf("%d", n);
			n--;
		}
	}
	printf("\n");
}
