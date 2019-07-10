#include "holberton.h"
#include <stdio.h>
/**
 * _pow_recursion - raises x to power of y
 * Return: int factorial of a given number
 * @x: intput
 * @y: power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
