#include "main.h"
/**
 * reverse_array - reverse array
 * @a: array of integers
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i = 0;
int tmp, l;
l = n / 2;
for (; i < l; i++)
{
tmp = a[i];
a[i] = a[n - i -1];
a[n - i -1] = tmp;
}
}
