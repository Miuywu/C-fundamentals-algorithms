#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - reverses input str
 *
 * Return: null
 * @str: input
 */
void puts_half(char *str)
{
	int c = 0;
	int d;
	int n;

	while (str[c] != '\0')
	{
		c++;
	}
	d = c / 2;

	if (c % 2 == 0)
	{
		while (d < c)
		{
			_putchar(str[d]);
			d++;
		}
	}
	else
	{
		n = (c - 1) / 2;
		n++;
		while (n < c)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
