#include <stdio.h>

void print_alphabet(void);

int main(void)
{
    print_alphabet();
    return (0);
}

void print_alphabet(void)
{
  int i;
  for (i = 'a'; i <= 'z'; i++)
    putchar (i);
}
