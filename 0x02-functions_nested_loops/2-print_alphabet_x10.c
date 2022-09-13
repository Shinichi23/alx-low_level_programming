#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return:void
 */

void print_alphabet_x10(void)
{
char a;
int i = 0;

while (i < 10)
{
a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
i++;
}

}
