#include <stdlib.h>
/**
 * free_grid -  concatenates two strings
 * @grid: pointer to pointer
 * @height: string
 * Return: void
 */
void free_grid(int **grid, int height)
{
int i = 0;
for (; i < height; i++)
{
free(grid[i]);
free(grid);
}
}
