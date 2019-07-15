#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: 1 if c is upper, 0 otherwise
 * @argc: input
 * @argv: inout
 */
int main(int argc, char *argv[])
{
	int p;

	if (argc == 3)
	{
		p = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", p);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
