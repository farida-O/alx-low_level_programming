#include "main.h"
/**
 * reverse_array - reverse array
 * @a: pointer to a string
 * @n:  number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i = 0;
int tmp;
if (n % 2 == 0)
{
n = n / 2;
}
else
{
n = (n + 1) / 2;
}
for (; i < n; i++)
{
tmp = a[i];
a[i] = a[n - i];
a[n - i] = tmp;
}
}
