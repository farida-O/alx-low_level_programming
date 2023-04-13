#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid -  concatenates two strings
 * @width: string
 * @height: string
 * Return:  a pointer
 */
int **alloc_grid(int width, int height)
{
int **arr = NULL;
int i = 0;
int j = 0;
arr = malloc(height * sizeof(int *));
if (arr == NULL)
{
return (NULL);
}
for (; i < height; i++)
{
arr[i] = malloc(width* sizeof(int));
for (; j < width; j++)
{
arr[i][j] = 0;
}
}
return (arr);
}
