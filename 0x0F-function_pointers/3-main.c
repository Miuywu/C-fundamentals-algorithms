#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry
 * Return: 0
 * @argv: a
 * @argc: n
 */

int main(int argc, char *argv[])
{
	int a, b;/*arg int holders*/

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (*get_op_func)(argv[2])(a, b));
	return (0);
}
