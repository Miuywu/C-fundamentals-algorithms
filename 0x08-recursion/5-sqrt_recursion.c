#include "holberton.h"
#include <stdio.h>
/**
 * xUp - increments x for x^2
 *
 * @n: intput
 * @x: square root
 * Return: pass sqrt to main
 */
int xUp(int x, int n)
{
	if (x * x == n)
		return (x);
	else if (x * x > n)
		return (-1);
	else
		return (xUp(x + 1, n));
}
/**
 * _sqrt_recursion - calls to xUp to output sqrt of n
 * @n: input
 * Return: sqrt or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n != 0)
		return (xUp(1, n));
	return (1);
}
