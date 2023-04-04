#include <string.h>
#include <stdio.h>
/**
 * print_diagsums -  prints the sum of 
 * the two diagonals of a square matrix of integers
 * @a: pointer to a string
 * @size: 
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int col, row, sum_1, sum_2;
row = 0;
sum_1 = 0;
sum_2 = 0;
for (; row < size; row++)
{
col = 0;
for (; col < size; col++)
{
if (row == col)
{
sum_1 += a[col + row * size];
}
if ((row + col) == (size - 1))
{
sum_2 += a[col + row * size];
}
}
}
printf("%d, %d", sum_1, sum_2);
putchar('\n');
}
