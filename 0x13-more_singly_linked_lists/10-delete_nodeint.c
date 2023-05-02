#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete nth node.
 * @head: list head.
 * @index: target node index
 * Return: void.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *prev;
listint_t *current = *head;
unsigned int i = 1;
for (; i <= index; i++)
{
if (current == NULL)
return (-1);
prev = current;
current = current->next;
}
if (index == 0)
*head = current->next;
else
prev->next = current->next;
free(current);
return (1);
}
