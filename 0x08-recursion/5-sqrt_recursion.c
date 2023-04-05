#include <math.h>
/**
 * _sqrt_recursion -  the natural square root of a number
 * @n: base number
 * Return: integer
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (sqrt(n));
}
