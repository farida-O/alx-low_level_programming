#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * print_rev -  prints a string in a reverse, followed by a new line
 * @s: pointer to a string
 * Return: void
 */
void print_rev(char *s)
{
int i = strlen(s)-1;
for (; i >= 0; i--)
{
putchar(s[i]);
}
}
