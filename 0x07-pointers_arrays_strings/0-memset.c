#include <string.h>
/**
 * _memset - concatenates two strings
 * @s: pointer to a string
 * @b: bytes' content
 * @n: number of bytes
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
