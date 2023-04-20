#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints numbers, followed by a new line
 * @separator: string to be printed between numbers.
 * @n: the operator
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list ptr;
va_start(ptr, n);
for (; i < n; i++)
{
char *str = va_arg(ptr, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if ((i != n - 1) && (separator != NULL))
printf("%s", separator);
}
printf("\n");
va_end(ptr);
}
