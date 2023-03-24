#include "main.h"
/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
int i;
char Fizz[] = "Fizz";
char Buzz[] = "Buzz";
for (; i <= 100; i++)
{
if (i%3 == 0)
{
write(STDOUT_FILENO, Fizz, 4);
if (i%5 == 0)
{
write(STDOUT_FILENO, Buzz, 4);
}
}
else if (i%5 == 0)
{
write(STDOUT_FILENO, Buzz, 4);
}
else
{
_putchar('0'+i);
}
_putchar(' ');
}
_putchar('\n');
return (0);
}
