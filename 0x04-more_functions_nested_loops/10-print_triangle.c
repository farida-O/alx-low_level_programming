#include "main.h"
/**
 * print_triangle - function that draws a triangle
 * Description:
 * @size: the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
int j = 0;
int i;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (; j < size; j++)
{
i = 0;
for (; i < size - j - 1; i++)
{
_putchar(' ');
}
i = 0;
for (; i < j + 1; i++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
