#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - return nth node.
 * @head: list head.
 * @idx: target node index
 * Return: void.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *prev;
listint_t *new;
listint_t *current = *head;
unsigned int i = 1;
for (; i <= idx; i++)
{
if (current == NULL)
return (NULL);
prev = current;
current = current->next;
}
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = current;
if (i == 0)
*head = new;
else
prev->next = new;
return (new);
}
