#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - last digit
 * Description:
 * @n : input value
 * Return: last digit
 */
int print_last_digit(int n)
{
int last_digit;
last_digit = n - (int)(n / 10) * 10;
last_digit = abs(last_digit);
_putchar('0'+last_digit);
return (last_digit);
}
