#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * rev_string -  prints a string in a reverse, followed by a new line
 * @s: pointer to a string
 * Return: void
 */
void rev_string(char *s)
{
int i = 0;
int l = strlen(s) - 1;
char tmp;
for (; i < l / 2; i++)
{
tmp  = *(s + i);
*(s + i) = *(s + l - i);
*(s + l - i) = tmp;
}
}
