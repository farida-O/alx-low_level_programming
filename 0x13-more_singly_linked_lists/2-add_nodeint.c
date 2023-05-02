#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - add new node.
 * @head: list head.
 * @n: integar value
 * Return: pointer to the new head.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *current;
current = malloc(sizeof(listint_t));
if (current == NULL)
{
free(current);
return (NULL);
}
current->n = n;
current->next = *head;
*head = current;
return (current);
}
