#include <ctype.h>
#include "main.h"
/**
 * _isupper - Determine whether a character is in uppercase.
 * Description: using isupper
 * @c: input Character
 * Return: 0 in case it's a lowercase character and 1 otherwise
 */
int _isupper(int c)
{
if (isupper(c))
{
return (1);
}
else
{
return (0);
}
}
