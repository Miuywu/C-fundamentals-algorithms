#include "holberton.h"

/**
 * *leet - translates input msg to l33t code
 *
 * Return: null
 * @c: input
 */
char *leet(char *c)
{
    int a = 0;
    int b = 0;
    int d = 0;

    for (;*(c + a) != '\0'; a++)
    {
        char v[20] = "aAeEoOtTlL";
        char l[20] = "4433007711"
        b
        for (; v[b] != '\0'; b++)
        {
            if (c[a] == v[b])
            {
                for (; d <= 9; d++)
                {
                v[d] = l[d];
                 }
                *(c + a) = v[b];
            }
        }
    }
    return (c);
}
