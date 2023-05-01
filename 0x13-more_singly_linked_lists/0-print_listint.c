#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints anything.
 * @h: list head.
 * Return:  the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
size_t num = 0;
const listint_t *current = h;
while (current != NULL)
{
num += 1;
printf("%d\n", current->n);
current = current->next;
}
return (num);
}
