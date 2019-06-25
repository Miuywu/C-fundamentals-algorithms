#include "holberton.h"

/**
 * print_alphabet_x10 - prints 'a'-'z'
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i;
	int m;

	for (m = 0; m < 11; m++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar (i);
		_putchar ('\n');
	}
}
