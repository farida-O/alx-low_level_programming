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
for (; i <= 100; i++)
{
if (i % 3 == 0)
{
fputs("Fizz", stdout);
if (i % 5 == 0)
{
fputs("Buzz", stdout);
}
}
else if (i % 5 == 0)
{
fputs("Buzz", stdout);
}
else
{
j = 0;
num = i;
while (num > 0)
{
str[j++] = num % 10 + '0';
num /= 10;
}
l = j - 1;
for (; l >= 0; l--)
{
putchar(str[l]);
}
}
if (i != 100)
putchar(' ');
}
putchar('\n');
return (0);
}
