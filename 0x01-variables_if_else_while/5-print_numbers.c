#include <stdio.h>
/**
 * main - Entry point
 * Description: print numbers
 * Return: Always 0
 */
int main(void)
{
int i = 0;
for (; i<=10; i++)
{
putchar('%d',i);
}
putchar('\n');
return (0);
}