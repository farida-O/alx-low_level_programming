#include <stdlib.h>
#include "main.h"
/**
 * jack_bauer - hour
 * Description: print every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
int i1 = '0';
int i2 = '0';
int i3 = '0';
int i4 = '0';
for (; i4 < '3'; i4++)
{
for (; i3 < '4'; i3++)
{
for (; i2 < '6'; i2++)
{
for (; i1 <= '9'; i1++)
{
_putchar(i4);
_putchar(i3);
_putchar(':');
_putchar(i2);
_putchar(i1);
}
}
}
}
}
