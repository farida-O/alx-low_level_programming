#include <string.h>
#include "main.h"
/**
 * _strncpy - concatenates two strings
 * @dest: pointer to a string
 * @src: pointer to the second string
 * @n: n bytes from src
 * Return: pointer to char
 */
char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}
