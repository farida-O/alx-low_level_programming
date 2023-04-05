#include <stdio.h>
/**
 * factorial - returns the factorial
 * @n: number
 * Return: integer
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n <= 1)
{
return (n);
}
return (n * factorial(n - 1));
}
