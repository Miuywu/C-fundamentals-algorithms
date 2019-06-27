#include "holberton.h"


/**
 * print_most_numbers - prints 0..9 excluding 2, 4 then new line
 *
 * Return: null
 */
void print_most_numbers(void)
{
	int b;

	for (b = 0; b <= 9; b++)
	{
		if (b != 2 && b != 4)
		{
			_putchar(b + '0');
		}
	}
_putchar('\n');
}
