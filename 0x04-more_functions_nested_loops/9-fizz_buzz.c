#include <stdio.h>
#include "main.h"
/**
 * main - print numbers from 1 to 100
 * Return: 0
 */
int main(void)
{
int i = 1;
for (; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("Fizz");
if (i % 5 == 0)
{
printf("Buzz");
}
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
_putchar(' ');
}
_putchar('\n');
return (0);
}
