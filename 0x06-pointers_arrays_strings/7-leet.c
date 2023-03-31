#include <string.h>
/**
 * leet - concatenates two strings
 * @s: pointer to a string
 * Return: string
 */
char *leet(char *s)
{
int i;
i = 0;
for (; i < (int)strlen(s); i++)
{
if (strstr("Aa", s[i]))
{
s[i] = '4';
}
else if (strstr("Ee", s[i]))
{
s[i] = '3';
}
else if (strstr("oO", s[i]))
{
s[i] = '0';
}
else if (strstr("tT", s[i]))
{
s[i] = '7';
}
else if (strstr("lL", s[i]))
{
s[i] = '1';
}
}
return (s);
}
