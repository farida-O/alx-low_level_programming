#include <stdlib.h>
#include <string.h>
/**
 * _strdup - creates a copy of the string
 * @str: string
 * Return:  a pointer to the array or NULL if size = 0
 */
char *_strdup(char *str)
{
char *arr;
int size = strlen(str);
int i = 0;
arr = malloc(size);
if ((size == 0) || arr == NULL)
{
return (NULL);
}
for (; i <= (int)size; i++)
{
arr[i] = str[i];
}
return (arr);
}
