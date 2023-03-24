#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * Description: print numbers
 * @n: number of times the character \ should be printed
 * return: void
 */
void print_square(int size)
{
int j = 0;
int i;
for (; j < size; j++)
{
i = 0;
for (; i < size; i++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
