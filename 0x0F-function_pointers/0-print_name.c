#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - calls to fn pointer of fn that prints name
 * @name: n
 * @f: fn pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
