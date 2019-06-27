#include "holberton.h"


/**
 * print_line - prints underscores n times
 *
 * Return: n
 * @n: input number of underscores
 */
void print_line(int n)
{
	int a;

	if (n > 0)
		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
	_putchar('\n');
}
