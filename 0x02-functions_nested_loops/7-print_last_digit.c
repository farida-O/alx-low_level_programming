#include "main.h"
/**
 * _abs - last digit
 * Description:
 * @n : input value
 * Return: last digit
 */
int print_last_digit(int n)
{
int last_digit;
last_digit = n - (int)(n / 10) * 10;
return (last_digit);
}
