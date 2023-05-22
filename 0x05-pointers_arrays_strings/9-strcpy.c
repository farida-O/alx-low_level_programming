#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * _strcpy -  copies the string pointed
 * @dest: pointer to a string
 * @src:  pointer to a string
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
long int i = 0;
for (; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
