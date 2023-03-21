#include "main.h"
/**
 * print_alphabet_x10 - print alphabets
 * Description: using _putchar
 * return: void
 */
void print_alphabet_x10(void)
{
int i = 0;
char c;
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
