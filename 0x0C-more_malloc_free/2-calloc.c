#include <stdlib.h>
/**
 * _calloc - allocates memory using calloc
 * @nmemb: number of elements to be allocated
 * @size:  size of elements
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
