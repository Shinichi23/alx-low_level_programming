#include <stdio.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
char a = 'a';

while (a <= 'z')
{
if (a != 'e' && a != 'q')
{
putchar(a);
}
a++;
}

putchar('\n');
return (0);
}
