#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * rev_string -  prints a string in a reverse, followed by a new line
 * @s: pointer to a string
 * Return: void
 */
void rev_string(char *s)
{
int i = strlen(s) - 1;
for (; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
