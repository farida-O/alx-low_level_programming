#include <stdlib.h>
#include "main.h"
/**
 * times_table - prints times table
 * Description:
 * Return: void
 */
void times_table(void)
{
int i4 = 0;
int i3 = 0;
int n;
int last_digit;
for (; i4 <= 9; i4++)
{
i3 = 0;
for (; i3 <= 9; i3++)
{
n = i3 *i4;
if (n > 9)
{
last_digit = (int)(n / 10);
_putchar('0' + last_digit);
last_digit = n -  last_digit * 10;
_putchar('0' + last_digit);
}
else
{
_putchar('0' + n);
}
if (i3 != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
