#include <math.h>
/**
 * _pow_recursion - returns the factorial
 * @x: base number
 * @y: power
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
return (pow(x, y));
}
