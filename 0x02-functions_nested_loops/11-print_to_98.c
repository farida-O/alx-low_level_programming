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
int n;
int last_digit;
for (; n <= 98; n++)
{
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
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
