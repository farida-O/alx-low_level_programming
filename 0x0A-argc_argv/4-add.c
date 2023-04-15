#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - starting point.
 * @argc: arguments counts.
 * @argv: arguments vectors.
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i = 0;
int sum = 0;
if (argc == 1)
{
printf("0\n");
return (1);
}
for (; i < argc; i++)
{
sum += isdigit(atoi(argv[i]));
}
printf("%d\n", sum);
return (0);
}
