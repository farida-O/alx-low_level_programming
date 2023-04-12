#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: array size
 * @c: character
 * Return:  a pointer to the array or NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
char *arr;
int i = 0;
arr = malloc(size);
if ((size == 0) || arr == NULL)
{
return (NULL);
}
for (; i < (int)size; i++)
{
arr[i] = c;
}
return (arr);
}
