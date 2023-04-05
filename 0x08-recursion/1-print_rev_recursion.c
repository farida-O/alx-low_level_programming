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
if (*s == '\0')
{
return;
}
putchar(*s);
_print_rev_recursion(s + 1);
putchar('\n');
}
