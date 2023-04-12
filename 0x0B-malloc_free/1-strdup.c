#include <stdlib.h>
#include <string.h>
/**
 * _strdup - creates a copy of the string
 * @str: string
 * Return:  a pointer to the array or NULL if size = 0
 */
char *_strdup(const char *str)
{
char *arr = NULL;
unsigned int size = strlen(str);
int i = 0;
arr = malloc(size + 1);
if ((arr == NULL) || (str == NULL))
{
return (NULL);
}
for (; i < (int)size; i++)
{
arr[i] = str[i];
}
arr[size] = '\0';
return (arr);
}
