#include <stdio.h>
/**
* main - prints required text
*
* Return: Always 0 (Success)
*/
int main(void)
{
int integ; 
long intLong;
double intLL;
char chara;
float flt;
printf("Size of a char: %d byte(s)\n", sizeof(chara));
printf("Size of an int: %d byte(s)\n", sizeof(integ));
printf("Size of a long int: %d byte(s)\n", sizeof(intLong));
printf("Size of a long long int: %d byte(s)\n", sizeof(intLL));
printf("Size of a float: %d byte(s)\n",  sizeof(flt));
return (0);
}
