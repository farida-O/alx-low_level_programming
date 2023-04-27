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
while (h != NULL)
{
num += 1;
printf("[%d] %s", h->len, h->str);
h = h->next;
}
return (num);
}
