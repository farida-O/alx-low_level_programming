#include <unistd.h>
#include <stdio.h>
/**
 * main - causes an infinite loop
 * Return: 0
 */
int main(void)
{
int i = 1;
int l, j, num;
char str[10];
char Fizz[] = "Fizz";
char Buzz[] = "Buzz";
for (; i <= 100; i++)
{
if (i%3 == 0)
{
puts(Fizz);
if (i % 5 == 0)
{
puts(Buzz);
}
}
else if (i % 5 == 0)
{
puts(Buzz);
}
else
{
if (i > 9)
{
printf("%d",i);
}
else
{
putchar('0'+i);
}
}
putchar(' ');
}
putchar('\n');
return (0);
}
