#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * print_chessboard -  prints the chessboard
 * @a: pointer to a string
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int i, j;
i = 0;
for (; i < 8; i++)
{
j = 0;
for (; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
