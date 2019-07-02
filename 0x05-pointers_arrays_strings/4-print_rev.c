#include "holberton.h"

/**
 * print_rev - prints string reversed
 *
 * Return: null
 * @s: input
 */
void print_rev(char *s)
{
	int size = 0;
	int a;

	if (*s != '\0')
	{
		for (; *s != '\0'; s++)
			size++;
		s = s - size;
		for (a = size - 1; a >= 0; a--)
			_putchar(s[a]);
	}
	_putchar('\n');
}
