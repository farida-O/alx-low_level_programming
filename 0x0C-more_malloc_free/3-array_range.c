#include <stdlib.h>
/**
 * array_range - allocates memory using malloc
 * @min: string
 * @max: string
 * Return: integer
 */
int *array_range(int min, int max)
{
int *arr;
int i = 0;
int size = max - min;
if (min > max)
return (NULL);
arr = malloc(size + 1);
if (arr == NULL)
return (NULL);
for (; min <= max; min++)
{
    arr[i] = min;
    i++;
}
return (arr);
}
