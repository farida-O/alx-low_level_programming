#include <string.h>
/**
 * cap_string - concatenates two strings
 * @s: pointer to a string
 * Return: string
 */
char *cap_string(char *s)
{
int i;
i = 0;
for (; i < (int)strlen(s); i++)
{
if (strchr(", ;.!?\"(){}\n\t", s[i]))
{
if (s[i + 1] > 'a')
{
s[i + 1] -= 32;
}
}
if ((s[i] > 'a') && (i == 0))
{
s[i] -= 32;
}
}
return (s);
}
