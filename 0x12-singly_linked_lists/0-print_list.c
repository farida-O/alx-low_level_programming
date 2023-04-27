#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints anything.
 * @h: list head.
 * Return:  the number of nodes.
 */
size_t print_list(const list_t *h)
{
size_t num = 0;
const list_t *current = h;
while (h != NULL)
{
num += 1;
if (current ->str == NULL)
printf("[0] (nil)");   
else
printf("[%d] %s", current->len, current->str);
current = current->next;
}
return (num);
}
