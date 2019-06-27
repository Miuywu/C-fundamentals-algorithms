#include "holberton.h"


/**
 * print_triangle - prints triangle
 *
 * Return: null
 * @size: input number
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size > 0)
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				c = a + 1;
				if (b < size - c)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	else
		_putchar('\n');
}
