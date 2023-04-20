#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter.
 * @array: array of elements.
 * @size: the size of the array.
 * @action: pointer to the function you need to use.
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i = 0;
if ((action != NULL) && (size > 0) && (array != NULL))
{
for (; i < (int)size; i++)
{
action(array[i]);
}
}
}
