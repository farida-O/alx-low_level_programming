#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything.
 * @format:  list of types of arguments
 * Return: void.
 */
void print_all(const char * const format, ...)
{
char *s;
int flag = 0;
unsigned int i = 0;
va_list ptr;
va_start(ptr, format);
while (format[i] && format)
{
switch (format[i])
{
case ('c'):
printf("%c", va_arg(ptr, int));
flag = 1;
break;
case ('i'):
flag = 1;
printf("%d", va_arg(ptr, int));
break;
case ('f'):
flag = 1;
printf("%f", (float) va_arg(ptr, double));
break;
case ('s'):
flag = 1;
s = va_arg(ptr, char *);
if (s == NULL)
s = "(nil)";
printf("%s", s);
break;
}
if (format[i + 1] && flag)
printf(", ");
i++;
flag = 0;
}
printf("\n");
va_end(ptr);
}
