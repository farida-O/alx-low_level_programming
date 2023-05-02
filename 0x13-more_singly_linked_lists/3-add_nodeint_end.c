#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - add node at the end.
 * @head: list head.
 * @n: integar value.
 * Return: pointer to the new head.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *current = *head;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
free(new);
return (NULL);
}
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (current->next != NULL)
current = current->next;
current->next = new;
return (new);
}
