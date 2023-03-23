#include "main.h"
/**
 * more_numbers - function
 * Description: print numbers
 * return: void
 */
void more_numbers(void)
{
char c;
int i;
int j = 0;
for (; j <10; j++)
{
c = '0';
i = 0;
for (; i < 15; i++)
{
if (i == 10)
{
c = '0';
}
if (i > 9)
{
_putchar('1');
}
_putchar(c);
c++;
}
_putchar('\n');
}
}
