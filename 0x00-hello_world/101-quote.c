#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 * Description: prints using write
 * Return: Always 0
 */
int main(void)
{
char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int len = strlen(message);
write(STDOUT_FILENO, message, len);
return (1);
}
