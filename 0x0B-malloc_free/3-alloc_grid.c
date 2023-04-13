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
int **arr;
int i = 0;
int j = 0;
arr = malloc(height * sizeof(int *));
if (arr == NULL)
{
free(arr);
return (NULL);
}
for (; i < height; i++)
{
arr[i] = malloc(width * sizeof(int));
if (arr[i] == NULL)
{
i = 0;
for (; i < height; i++)
free(arr[i]);
free(arr);
return (NULL);
}
for (; j < width; j++)
{
arr[i][j] = 0;
}
}
return (arr);
}
