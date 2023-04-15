#include <stdio.h>
/**
 * main - starting point.
 * @argc: arguments counts.
 * @argv: arguments vectors.
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i = 0;
for (; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
