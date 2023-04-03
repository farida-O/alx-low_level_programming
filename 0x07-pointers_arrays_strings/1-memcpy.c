#include <string.h>
/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination of a memory area
 * @src: pointer to the source of a memory area
 * @n: number of bytes
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
i = 0;
for (; i < (int)n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
