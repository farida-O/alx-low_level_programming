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
arr = malloc(width * height);
if (arr == NULL)
{
return (NULL);
}
for (; i < width; i++)
{
for (; j < width; j++)
{
arr[i][j] = 0;
}
}
return (arr);
}
