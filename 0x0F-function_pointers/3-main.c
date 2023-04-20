#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - starting point
 * @argc: arguments counts
 * @argv: arguments vectors
 * Return: 0
 */
int main(int argc, char *argv[])
{
int a, b;
char *s;
int (*func_ptr)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
s = argv[2];
if ((!strcmp(s, "%") || !strcmp(s, "/")) && !b)
{
printf("Error\n");
exit(100);
}
func_ptr = get_op_func(s);
if (func_ptr == NULL)
{
printf("Error\n");
exit(99);
}
printf("%d\n", (*func_ptr)(a, b));
return (0);
}
