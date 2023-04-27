#include <stdio.h>
#include "lists.h"
/**
 * list_len - prints anything.
 * @h: list head.
 * Return:  the number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *current;
current->str = strdup(str);
current->next = *head;
return (current);
}
