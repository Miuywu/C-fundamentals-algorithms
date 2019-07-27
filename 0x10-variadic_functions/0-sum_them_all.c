#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: n
 *
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int sum;
	unsigned int a;

	sum = 0;
	va_start(arguments, n);
	for (a = 0; a < n; a++)
	{
		sum += va_arg(arguments, unsigned int);
	}
	va_end(arguments);
	if (n == 0)
		return (0);
	return sum;
}
