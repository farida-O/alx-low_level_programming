#include <string.h>
#include <stdio.h>
/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer to a string
 * @to: pointer to character
 * Return: void
 */
void set_string(char **s, char *to)
{
*to = **s;
}
