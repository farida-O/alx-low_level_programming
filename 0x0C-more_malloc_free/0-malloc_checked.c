#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: string
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
int *arr = NULL;
arr = malloc(b);
if (arr == NULL)
exit(98);
else
return (arr);
}
