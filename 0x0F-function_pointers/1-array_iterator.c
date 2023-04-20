#include <stdio.h>
/**
 * print_name - prints a name.
 * @array:
 * @size: the size of the array.
 * @action: pointer to the function you need to use.
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i = 0;
for (; i < (int)size; i++)
{
action(array[i]);
}
}
