B#include "holberton.h"
#include <stdio.h>

/**
 * main - prints 0..100
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 100; n++)
	{
		if (n > 0)
		{
			if (n % 3 == 0 && n % 5 == 0)
				printf("FizzBuzz");
			else if (n % 3 == 0)
				printf("Fizz");
			else if (n % 5 == 0)
				printf("Buzz");
			else
				printf("%d", n);
		}
		else
			printf("%d", n);
		printf(" ");
	}
	if (n != 100)
		printf("\n");
	return (0);
}
