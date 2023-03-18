#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabets
 * Return: Always 0
 */
int main(void)
{
char c = '0';
while (c <= 'f')
{
putchar(c);
if (c == '9')
{
c += 87;
}
c++;
}
putchar('\n');
return (0);
}
