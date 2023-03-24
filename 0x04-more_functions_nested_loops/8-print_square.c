#include "main.h"
/**
 * print_square - function that draws a square
 * Description: 
 * @size: the size of the square
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
