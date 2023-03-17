#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabets
 * Return: Always 0
 */
int main(void)
{
char c = 'a';
while (c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
