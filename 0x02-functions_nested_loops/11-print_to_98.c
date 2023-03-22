#include <stdlib.h>
#include "main.h"
/**
 * print_to_98 - print numbers to 98
 * Description:
 * @n : start number
 * Return: void
 */
void print_to_98(int n)
{
int last_digit;
int plus = +1;
if (n < 0)
plus = -1;
while(n != 98)
{
if (abs(n) > 9)
{
if (n < 0)
{
_putchar('-');
}
last_digit = (int)(n / 10);
_putchar('0' + abs(last_digit));
last_digit = n -  last_digit * 10;
_putchar('0' + abs(last_digit));
}
else
{
if (n < 0)
{
_putchar('-');
}
_putchar('0' + abs(n));
}
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
n=n+plus;
}
_putchar('\n');
}
