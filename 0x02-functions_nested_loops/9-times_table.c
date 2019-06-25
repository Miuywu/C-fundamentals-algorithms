#include "holberton.h"

/**
 * times_table - prints 9x9
 *
 * Return: value of last digit
 */

void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (c / 10 == 0)
			{
				if (b != 0)
					_putchar(' ');
				_putchar(c % 10 + '0');
			}
			else if (c / 10 == 0 && c % 10 != 0)
			{
				_putchar(' ');
				_putchar(c % 10 + '0');
			}
			else
			{
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
			if (!(c % 9 == 0 && b == 9))
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
