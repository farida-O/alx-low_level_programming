#include <stdio.h>
/**
 * main - Starting point
 * @argc: arguments counts
 * @argv: arguments vectors
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
int i = 1;
for (; i <= argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
