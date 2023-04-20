#include <stdio.h>
/**
 * int_index - executes a function given as a parameter.
 * @array: array of elements.
 * @size: the size of the array.
 * @cmp: pointer to the function you need to use.
 * Return: the index of the first element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if ((cmp != NULL) && (size > 0))
{
for (; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
return (-1);
}

