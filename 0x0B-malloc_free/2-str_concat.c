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
int s_l = strlen(s1);
if (s1 == NULL)
{
s1 = "";
}
if (s2 ==NULL)
{
s2 = "";
}
arr = strdup(s1);
arr = arr + s_l;
arr = strdup(s2);
arr = arr - s_l;
return (arr);
}
