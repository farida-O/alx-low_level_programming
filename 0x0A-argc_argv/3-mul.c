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
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
