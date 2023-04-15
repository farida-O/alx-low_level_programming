#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - allocates memory using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
int *arr;
int i = 0;
if (old_size == new_size)
{
return (ptr);
}
if (ptr == NULL)
{
malloc(new_size);
return (ptr);
}
if (!new_size)
{
free(ptr);
return (NULL);
}
realloc(ptr, new_size);
return (arr);
}
