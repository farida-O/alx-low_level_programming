#include <string>
#include "main.h"
/**
 * string_toupper - concatenates two strings
 * @s: pointer to a string
 * Return: string
 */
char *string_toupper(char * s)
{
int i, tmp;
i = 0;
for (; i < strlen(s); i++)
{
if (*s > 96)
{
*s -= 12;
}
}
return (s);
}
