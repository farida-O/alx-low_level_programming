#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_to_98 - print numbers to 98
 * Description:
 * @n : start number
 * Return: void
 */
void print_to_98(int n)
{
int plus = +1;
char str[9];
int i = 0;
if (n > 98)
plus = -1;
while (n != 98)
{
if (abs(n) > 9)
{
if (n < 0)
{
_putchar('-');
}
sprintf(str, "%d", abs(n));
i = 0;
for (; str[i] != '\0'; i++)
{
char c = str[i];
write(STDOUT_FILENO, &c, 1);
}
}
else
{
if (n < 0)
{
_putchar('-');
}
_putchar('0' + abs(n));
}
_putchar(',');
_putchar(' ');
n = n + plus;
}
_putchar('9');
_putchar('8');
_putchar('\n');
}
