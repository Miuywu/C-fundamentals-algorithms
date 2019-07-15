#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 1 if c is upper, 0 otherwise
 * @argc: input
 * @argv: inout
 */
int main(int argc, char *argv[])
{
	int a;

	(void) argv;

	for (a = 0; a < argc; a++)
		printf("%s\n", *(argv + a));
	return (0);
}
