#include "holberton.h"
#include <stdio.h>
/**
 * _print_rev_recursion - prints a string in reverse
 * lenOfS - finds length of array
 * Return: NULL
 * @s: pointer to array of chars
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
