#include <string.h>
/**
 * cap_string - concatenates two strings
 * @s: pointer to a string
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
i = 0;
for (; i < (int)n; i++)
{
*(s + i) = b;
}
return (s);
}
