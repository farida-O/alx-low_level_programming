#include "main.h"
/**
 * more_numbers - function
 * Description: print numbers
 * return: void
 */
void more_numbers(void)
{
char c = '0';
int i = 0;
for (; i < 15; i++)
{
if (i > 9)
{
c = '0';
_putchar('1');
}
_putchar(c);
c++;
}
_putchar('\n');
}
