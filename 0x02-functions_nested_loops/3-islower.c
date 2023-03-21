#include <ctype.h>
#include "main.h"
/**
 * _islower - Determine whether a character is in lowercase.
 * Description: using islower
 * @c: input Character
 * Return: 0 in case it's a lowercase character and 1 otherwise
 */
int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
