#include <string.h>
#include <stdio.h>
/**
 * leet - concatenates two strings
 * @s: pointer to a string
 * Return: string
 */
char *leet(char *s)
{
int i, j;
char code[5] = {'4', '3', '0', '7', '1'};
char *alph[] = {"Aa", "Ee", "Oo", "Tt", "Ll"};
i = 0;
for (; i < (int)strlen(s); i++)
{
j = 0;
for (; j < 5; j++)
{
if (strchr(alph[j], s[i]))
{
s[i] = code[j];
}
}
}
return (s);
}
