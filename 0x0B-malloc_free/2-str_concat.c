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
int s_l;
char *arr = NULL;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
s_l = strlen(s1);
arr = malloc(s_l + strlen(s2));
if (arr == NULL)
{
return (NULL);
}
arr = strdup(s1);
arr[s_l] = strdup(s2);
return (arr);
}
