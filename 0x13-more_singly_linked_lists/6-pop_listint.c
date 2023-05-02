#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - remove first node.
 * @head: list head.
 * Return: void.
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *current = *head;
if (current == NULL)
return (0);
*head = (*head)->next;
n = current->n;
free(current);
return (n);
}
