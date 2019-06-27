#include "holberton.h"


/**
 * print_square - prints square with side length size
 *
 * Return: null
 * @size: side length
 */
void print_square(int size)
{
	int a;
	int b;

	if (size > 0)
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
