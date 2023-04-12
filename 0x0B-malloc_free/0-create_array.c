/**
 * create_array - creates an array of chars
 * @size: array size
 * @c: character
 * Return:  a pointer to the array or NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
char *arr;
arr = malloc(size);
arr[0] = c;
return (arr);
}
