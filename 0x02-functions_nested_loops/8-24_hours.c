#include "holberton.h"

/**
 * jack_bauer - prints 00:00 - 23:59
 *
 * Return: void
 */

void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 48; a <= 50; a++)
		for (b = 48; b <= 57; b++)
			for (c = 48; c <= 51; c++)
				for (d = 48; d <= 57; d++)
				{
					if (a != 50 || b <= 51)
					{
						_putchar(a);
						_putchar(b);
						_putchar(':');
						_putchar(c);
						_putchar(d);
					}
					_putchar('\n');
				}
}

