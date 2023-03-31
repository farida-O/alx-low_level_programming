#include "main.h"
/**
 * reverse_array - concatenates two strings
 * @a: pointer to a string
 * @n: pointer to a string
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i, tmp;
for (; i < n / 2; i++)
{
tmp = a[i];
a[i] = a[n - i];
a[n - i] = tmp;
}
}
