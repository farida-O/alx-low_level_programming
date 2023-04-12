#include <stdlib.h>
#include <string.h>
/**
 * _strdup - creates a copy of the string
 * @str: string
 * Return:  a pointer to the array or NULL if size = 0
 */
char *_strdup(char *str)
{
char *arr = NULL;
unsigned int size = strlen(str);
int i;
if (str == NULL)
{
return (NULL);
}
arr = stardup(str);
return (arr);
}
