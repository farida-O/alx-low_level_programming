#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - allocates memory using malloc
 * @min: string
 * @max: string
 * Return: pointer
 */
int *array_range(int min, int max)
{
int *arr;
int i = 0;
if (min > max)
{
return (NULL);
}
arr = malloc((max - min + 1) * sizeof(int));
if (arr == NULL)
{
return (NULL);
}
for (; min <= max; min++)
{
arr[i] = min;
i++;
}
return (arr);
}
