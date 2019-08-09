#include "holberton.h"
/**
 * print_binary - prints binary ver of decimal num
 * @n: n
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int len = 0;
	unsigned long int mark, r_sh;

	if (!n)
	{
/*		printf("\nran %d times.\n", len);*/
		_putchar('0');
		return;
	}
	len = sizeof(n) * 8 - 1;
	mark = 0;
/*	printf("\nran %d times.\n", len);*/
	while (len >= 0)
	{
		r_sh = n >> len;
		if (r_sh & 1)
		{
			mark = 1;
			_putchar('1');
		}
		else
		{
			if (mark)
				_putchar('0');
		}
		len--;
	}
}
