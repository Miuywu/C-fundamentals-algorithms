#include "holberton.h"

/**
 * _abs - returns abs value of input
 *
 * Return: value of last digit
 * @six: input number
 */

int _abs(int six)
{
	int a;

	if (six < 0)
	{
		a = six * (-1);
	}
	else
		a = six;
	return (a);
}
