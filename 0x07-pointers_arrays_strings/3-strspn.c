#include <string.h>
/**
 * _strspn -  gets the length of a prefix substring.
 * @s: pointer to a string
 * @accept: charachter
 * Return: number
 */
unsigned int _strspn(char *s, char *accept)
{
return (strspn(s, accept));
}
