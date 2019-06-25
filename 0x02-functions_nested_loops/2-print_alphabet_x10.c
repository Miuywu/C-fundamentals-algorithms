#include "holberton.h"
#include "_putchar.c"
/**
 * print_alphabet - prints 'a'-'z'
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
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
