#include "holberton.h"
/**
 * clear_bit - prints binary ver of decimal num
 * @n: n
 * @index: pos
 * Return: void
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int len = sizeof(n) * 8;
	unsigned long int sh;

	if (len <= index)
		return (-1);
	len = 0;
	sh = 1 << index;
	*n &= ~sh;
	return (1);
}
