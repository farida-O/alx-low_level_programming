#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion -  prints a string
 * @s: pointer to a string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
int i = strlen(s) - 1;
for (; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
