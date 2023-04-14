#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @nmemb: string
 * @size: string
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *arr = NULL;
if (!size || !nmemb)
return (NULL);
arr = calloc(nmemb, size);
if (arr == NULL)
return (NULL);
else
return (arr);
}
