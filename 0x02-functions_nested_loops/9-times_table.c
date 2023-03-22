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
for (; i4 <= 0; i4++)
{
for (; i3 <= 9; i3++)
{
n = i3 * i4;
_putchar('0'+ n);
if (i3 != 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}
