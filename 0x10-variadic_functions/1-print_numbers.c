#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - prints all its parameters
 * @n: n
 * @separator: s
 * Return: int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int a;

	va_start(arguments, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(arguments, unsigned int));
		if (separator != NULL && a < (n - 1))
			printf("%s", separator);
	}
	va_end(arguments);
	printf("\n");
}
