#include "holberton.h"

/**
 * print_last_digit - prints last digit of int
 *
 * Return: value of last digit
 * @sev: input number
 */

int print_last_digit(int sev)
{
	int mod;

	if (sev < 0)
	{
		sev = sev * -1;
	}
	mod = sev % 10;
	_putchar(mod + '0');
	return (mod);
}
