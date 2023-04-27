#include <stdio.h>
#include "lists.h"
/**
 * list_len - prints anything.
 * @h: list head.
 * Return:  the number of nodes.
 */
size_t list_len(const list_t *h)
{
size_t num = 0;
const list_t *current = h;
while (current != NULL)
{
num += 1;
current = current->next;
}
return (num);
}
