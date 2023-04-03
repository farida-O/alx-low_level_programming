#include <string.h>
/**
 * _strstr -  locates a substring.
 * @haystack: pointer to a string
 * @needle: pointer to substring
 * Return: pointer to the charachter
 */
char *_strstr(char *haystack, char *needle)
{
return (strstr(haystack, needle));
}
