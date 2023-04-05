#include <stdio.h>
#include <string.h>
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to a string
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
