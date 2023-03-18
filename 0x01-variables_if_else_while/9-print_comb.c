#include <stdio.h>
/**
 * main - Entry point
 * Description: print numbers
 * Return: Always 0
 */
int main(void)
{
int i = '0';
for (; i <= '9' ; i++)
{
putchar(i);
if (i < '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
