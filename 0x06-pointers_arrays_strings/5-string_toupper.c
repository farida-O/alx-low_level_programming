#include <string.h>
#include "main.h"
/**
 * string_toupper - concatenates two strings
 * @s: pointer to a string
 * Return: string
 */
char *string_toupper(char * s)
{
int i;
i = 0;
for (; i < strlen(s); i++)
{
if (s[i] > 96)
{
s[i] -= 12;
}
}
return (s);
}
