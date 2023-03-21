#include "main.h"
/**
 * print_alphabet - function
 * Description: print alphabets
 * return: void
 */
void print_alphabet(void)
{
int i = 0;
char c = 'a';
for (; i < 10; i++)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
}
