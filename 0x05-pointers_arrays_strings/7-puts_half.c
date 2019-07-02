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

	while (str[c] != '\0')
	{
		c++;
	}
	d = c / 2;

	while (d < c)
	{
		_putchar(str[d]);
		d++;
	}
	_putchar('\n');
}
