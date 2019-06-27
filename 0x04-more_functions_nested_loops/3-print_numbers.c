#include "holberton.h"


/**
 * print_numbers - prints 0..9 then new line
 *
 * Return: null
 */
void print_numbers(void)
{
	int b;

	for (b = 0; b <= 9; b++)
		_putchar(b + '0');
	_putchar('\n');
}
