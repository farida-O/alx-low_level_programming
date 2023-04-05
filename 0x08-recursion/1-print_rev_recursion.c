#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion -  prints a string
 * @s: pointer to a string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
putchar(*s);
putchar('\n');
}
