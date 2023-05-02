#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - return nth node.
 * @head: list head.
 * @index: target node index
 * Return: void.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
unsigned int i = 1;
for (; i <= index; i++)
{
if (current == NULL)
return (NULL);
current = current->next;
}
return (current);
}
