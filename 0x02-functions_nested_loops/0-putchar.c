#include <string.h>
#include "main.h"
/**
 * main - Entry point
 * Description: print string
 * Return: Always 0
 */
int main(void)
{
char c[] = "_putchar";
int i =0;
for (;i < (int)strlen(c);i++)
{
_putchar(c[i]);
}
return (0);
}
