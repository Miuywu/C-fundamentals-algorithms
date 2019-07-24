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

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	if (argv[2][1] != '\0' || (*get_op_func)(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", (*get_op_func)(argv[2])(a, b));
	return (0);
}
