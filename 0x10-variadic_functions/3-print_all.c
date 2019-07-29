#include "variadic_functions.h"

/**
 * pchar - calls function
 * @list: string struct
 *
 * Return: 0
 */
void pchar(va_list list)
{
	printf("%c", va_arg(list,  int));
}
/**
 * pint - calls function
 * @list: string struct
 *
 * Return: 0
 */
void pint(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * pfloat - calls function
 * @list: string struct
 *
 * Return: 0
 */
void pfloat(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * pstr - calls function
 * @list: string struct
 *
 * Return: 0
 */
void pstr(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - calls function
 * @format: list of types of arguments passed to the function
 * Description: Function that prints anything
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	int a;
	int b;
	char *spr = "";

	va_list args;

	op_t f_ops[] = {
		{"c", pchar},
		{"i", pint},
		{"f", pfloat},
		{"s", pstr},
		{NULL, NULL}
	};
	a = 0;

	va_start(args, format);

	while (format && format[a])
	{
		while (f_ops[b].c)
		{
			if (*f_ops[b].c == format[a])
			{
				printf("%s", spr);
				f_ops[j].ch(args);
				spr = ", ";
			}
			j++;
		}
		b = 0;
		a++;
	}
	printf("\n");
	va_end(args);
}
