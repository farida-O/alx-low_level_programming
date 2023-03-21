#include <ctype.h>
#include "main.h"
/**
 * print_sign - Determine the number polarity
 * Description: print 0, 1, or -1 based on the sign of the number
 * @n: input number
 * Return: 1 in case it's a positive number, 0 if it equals to zero, and -1 if it's negative
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
