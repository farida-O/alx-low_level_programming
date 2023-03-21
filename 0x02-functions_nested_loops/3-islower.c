#include <ctype.h>
#include "main.h"
/**
 * _islower - Determine whether a character is in lowercase.
 * Description: using islower
 * parameter c: Character
 * return: int
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
