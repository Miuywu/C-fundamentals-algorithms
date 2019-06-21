#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ldigit = n % 10;

	printf("Last digit of %d", n);
	printf(" is %d", ldigit);

	if (ldigit > 5)
		printf(" and is greater than 5");
	if (ldigit < 6 && ldigit != 0)
		printf(" and is less than 6 and not 0");
	if (ldigit == 0)
		printf(" and is 0");
	printf("\n");

	return (0);
}
