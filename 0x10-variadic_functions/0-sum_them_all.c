#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all -  the sum of all its parameters.
 * @n: the operator
 * Return: integr.
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i = 0;
if (n == 0)
{
return (0);
}
va_list ptr;
va_start(ptr, n);
for (; i < n; i++) {
sum += va_arg(ptr, int);
}
va_end(ptr);
return (sum);
}
