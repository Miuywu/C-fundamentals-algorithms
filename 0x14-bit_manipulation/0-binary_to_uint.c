#include "holberton.h"
/**
 * pow_r - raises x to power of y
 * Return: int factorial of a given number
 * @x: intput
 * @y: power
 */
unsigned int pow_r(int x, int y)
{
	if (y != 0)
		return (x * pow_r(x, y - 1));
	else
		return (1);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0's/1's
 * Return: binary string converted to decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0;
	int a = 0, len = 0;

	if (!b)
		return (0);
	while (*b == '0')
		b++;
	while (b[len])
	{
		if (b[len] > '9' || b[len] < '0')
			return (0);
		len++;
	}
	len--;

	for (a = 0; len >= 0; a++, len--)
	{
		if (b[len] == '1')
			converted += pow_r(2, a);
	}
	return (converted);
}
