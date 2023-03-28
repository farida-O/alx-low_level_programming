#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * puts2 -   prints every other character of a string
 * @str: pointer to a string
 * Return: void
 */
void puts2(char *str)
{
int i = 0;
int l = strlen(str);
for (; i < l; i += 2)
{
putchar(str[i]);
}
putchar('\n');
}
