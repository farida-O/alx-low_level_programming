#include <string.h>
/**
 * string_toupper - concatenates two strings
 * @s: pointer to a string
 * Return: string
 */
char *cap_string(char *)
{
int i;
i = 0;
for (; i < (int)strlen(s); i++)
{
if (s[i] >= 'a')
{
s[i] -= 32;
}
}
return (s);
}
