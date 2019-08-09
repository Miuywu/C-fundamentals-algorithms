#include "holberton.h"
/**
 * get_bit - prints binary ver of decimal num
 * @n: n
 * @index: pos
 * Return: void
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int len = sizeof(n) * 8;
	unsigned long int sh;

	if (len <= index)
		return (-1);
	len = 0;
	sh = 1 << index;
	if (sh & n)
		return (1);
	else
		return (0);
}
