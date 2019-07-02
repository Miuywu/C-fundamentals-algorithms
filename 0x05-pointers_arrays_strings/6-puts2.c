#include "holberton.h"

/**
 * puts2 - reverses input str
 *
 * Return: null
 * @str: input
 */
void puts2(char *str)
{
	int c = 0;

	while (*str != '\0')
	{
		if (c % 2 == 0)
			_putchar(*str);
		c++;
		str++;
	}
	_putchar('\n');
}
