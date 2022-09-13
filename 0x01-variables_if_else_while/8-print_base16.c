#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
char s = '0';

while (s <= '9')
{
putchar(s);
s++;
}

char a = 'a';

while (a <= 'f')
{
putchar(a);
a++;
}

putchar('\n');
return (0);
}
