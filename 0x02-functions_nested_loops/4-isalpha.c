#include <ctype.h>
#include "main.h"
/**
 * _islower - Determine whether it is an ahphabetic character
 * Description: using islower
 * @c: input Character
 * Return: 0 in case it's an ahphabetic character and 1 otherwise
 */
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}
