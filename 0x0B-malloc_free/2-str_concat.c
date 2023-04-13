#include <stdlib.h>
#include <string.h>
/**
 * str_concat -  concatenates two strings
 * @s1: string
 * @s2: string
 * Return:  a pointer to the array or NULL if size = 0
 */
char *str_concat(char *s1, char *s2)
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
arr = malloc(strlen(s_l) + strlen(s2) + 1);
if (arr == NULL)
{
return (NULL);
}
if (s1 != "") {
strcpy(arr, s1);
}

if (s2 != "") {
strcat(arr, s2);
}
return (arr);
}
