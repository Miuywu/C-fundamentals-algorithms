#include "holberton.h"


/**
 * print_diagonal - prints underscores n times
 *
 * Return: null
 * @n: input number
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
		for (a = 0; a < n; a++)
		{
			for (b = 0; b <= a; b++)
				if (b > 0)
					_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
