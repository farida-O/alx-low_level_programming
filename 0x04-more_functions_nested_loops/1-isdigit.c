#include <ctype.h>
#include "main.h"
/**
 * _isdigit - Determine whether it is a digit
 * Description: using islower
 * @c: input Character
 * Return: 0 in case it's a digit and 1 otherwise
 */
int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
{
return (0);
}
}
