#include <string.h>
#include "main.h"
/**
 * main - Entry point
 * Description: print '_putchar'
 * Return: Always 0
 */
int main(void)
{
char c[] = "_putchar";
int i = 0;
for (; i < (int)strlen(c); i++)
{
_putchar(c[i]);
}
_putchar('\n');
return (0);
}
