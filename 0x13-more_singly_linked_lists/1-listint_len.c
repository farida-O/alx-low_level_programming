#include <stdio.h>
#include "lists.h"
/**
 * listint_len - prints anything.
 * @h: list head.
 * Return:  the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
size_t num = 0;
const listint_t *current = h;
while (current != NULL)
{
num += 1;
current = current->next;
}
return (num);
}
