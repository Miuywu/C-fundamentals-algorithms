#include "holberton.h"
#include <stdio.h>
/**
 * factorial - factorial of a given number
 * Return: int factorial of a given number
 * @n: intput
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
