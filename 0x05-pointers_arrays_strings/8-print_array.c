#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints n elements of an array of integers
 * @a: pointer to an array
 * @n: number of elements of the array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
int i;
for (; i < n; i++)
{
putchar(a[i]);
if (i != (n - 1))
{
printf(", ");
}
}
putchar('\n');
}
