#include <string.h>
#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: pointer to a string
 * @src: pointer to the second string
 * @n: n bytes from src
 * Return: pointer to char
 */
char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}
