#include <stdio.h>
/**
 * main - causes an infinite loop
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
printf(' ');
}
printf('\n');
return (0);
}
