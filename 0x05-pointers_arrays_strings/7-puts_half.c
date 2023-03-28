#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * puts_half -   prints every other character of a string
 * @str: pointer to a string
 * Return: void
 */
void puts_half(char *str)
{
int l = strlen(str);
int i;
if (l % 2 == 0)
{
i = l / 2;
}
else
{
i = (l - 1) / 2;
}
for (; i < l; i += 2)
{
putchar(str[i]);
}
putchar('\n');
}
