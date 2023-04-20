#include <stdio.h>
/**
 * print_name - prints a name.
 * @name: a pointer to struct.
 * @f: pointer to function.
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
