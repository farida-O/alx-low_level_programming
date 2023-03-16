#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 * Description: prints using write
 * Return: Always 0
 */
int main(void)
{
char m[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int len = strlen(m);
write(STDOUT_FILENO, m, len);
return (1);
}
