#include <stdlib.h>
#include <string.h>
/**
 * malloc_checked - creates a copy of the string
 * @b: string
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
int *arr = NULL;
arr = malloc(b);
arr = b;
return (arr);
}
