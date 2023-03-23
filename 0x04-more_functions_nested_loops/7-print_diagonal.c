#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * Description: print numbers
 * @n: number of times the character \ should be printed
 * return: void
 */
void print_diagonal(int n)
{
int j = 0;
int i;
for (; j < n; j++)
{
for (i = 0; i < j; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
