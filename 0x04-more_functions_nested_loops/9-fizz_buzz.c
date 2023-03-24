#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * main - causes an infinite loop
 * Return: 0
 */
int main(void)
{
int i = 0;
int num;
int l;
int j;
char str[10];
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
j = 0;
num = i;
while (num > 0) {
str[j++] = num % 10 + '0';
num /= 10;
}
l = j - 1;
for (; l >= 0; l--) {
write(STDOUT_FILENO, &str[l], 1);
}
}
_putchar(' ');
}
_putchar('\n');
return (0);
}
