#include "holberton.h"
#include <stdio.h>
/**
 * pass - increments x for x^2
 *
 * @n: intput
 * @x: square root
 * Return: pass sqrt to main
 */
int pass(int x, int n)
{
	if (x == n)
		return (1);
	else if (x % n != 0)
		return (pass(x, n + 1));
	else if (x % n == 0)
		return (0);
	else
		return (0);
}
/**
 * is_prime_number - calls to xUp to output sqrt of n
 * @n: input
 * Return: sqrt or -1
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (pass(n, 2));
}
