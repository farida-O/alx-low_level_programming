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
int limit = '9';
for (; i4 < '3'; i4++)
{
i3 = '0';
if (i4 == '2')
{
limit = '3';
}
for (; i3 < limit; i3++)
{
i2 = '0';
for (; i2 < '6'; i2++)
{
i1 = '0';
for (; i1 <= '9'; i1++)
{
_putchar(i4);
_putchar(i3);
_putchar(':');
_putchar(i2);
_putchar(i1);
_putchar('\n');
}
}
}
}
}
