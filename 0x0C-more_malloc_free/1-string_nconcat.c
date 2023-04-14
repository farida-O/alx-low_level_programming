#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - allocates memory using malloc
 * @s1: string
 * @s2:
 * @n:
 * Return: void
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *arr = NULL;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
arr = malloc(strlen(s1) + strlen(s2) + 1);
if (arr == NULL)
{
return (NULL);
}
if (s1)
strcpy(arr, s1);
if (s2)
strncat(arr, s2, n);
return (arr);
}
