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
unsigned int size = strlen(str);
int i = 0;
if (str == NULL)
{
return (NULL);
}
arr = malloc(size + 1);
if (arr == NULL)
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
