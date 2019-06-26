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

	mod = sev % 10;
	if (mod < 0)
		mod = mod * -1;
	_putchar(mod + '0');
	return (mod);
}
