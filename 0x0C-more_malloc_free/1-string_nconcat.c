#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - allocates memory using malloc
 * @s1: string
 * @s2: second string
 * @n: number of bytes in from the second string
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *arr = NULL;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
arr = malloc(strlen(s1) + n + 1);
if (arr == NULL)
return (NULL);
if (s1)
strcpy(arr, s1);
if (s2)
strncat(arr, s2, n);
return (arr);
}
