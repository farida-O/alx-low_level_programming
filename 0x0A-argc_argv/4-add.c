#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - starting point.
 * @argc: arguments counts.
 * @argv: arguments vectors.
 * Return: 0
 */
int main(int argc, char *argv[])
{
char *ptr;
int arg;
int i = 1;
int sum = 0;
if (argc == 0)
{
printf("0\n");
return (1);
}
for (; i < argc; i++)
{
arg = strtol(argv[i], &ptr, 10);
if (*ptr)
{
printf("Error\n");
return (1);
}
sum += arg;
}
printf("%d\n", sum);
return (0);
}
