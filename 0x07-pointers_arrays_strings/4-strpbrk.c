#include <string.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to a string
 * @accept: charachter
 * Return: pointer to the charachter
 */
char *_strpbrk(char *s, char *accept)
{
return (strpbrk(s, accept));
}
