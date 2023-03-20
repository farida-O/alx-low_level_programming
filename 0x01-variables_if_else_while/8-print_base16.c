#include <stdio.h>
/**
 * main - Entry point
 * Description: print Hex
 * Return: Always 0
 */
int main(void)
{
int c = '0';
while (c <= 'f')
{
putchar(c);
if (c == '9')
{
c += 39;
}
c++;
}
putchar('\n');
return (0);
}
