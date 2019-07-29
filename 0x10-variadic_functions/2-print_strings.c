#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints str + new line
 * @n: n
 * @separator: s
 * Return: int
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int a;
	char *s;

	va_start(arguments, n);
	for (a = 0; a < n; a++)
	{
		s = va_arg(arguments, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && a < (n - 1))
			printf("%s", separator);
	}
	va_end(arguments);
	printf("\n");
}
