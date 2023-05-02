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
listint_t *current = *head;
int n = (*head)->n;
current = current->next;
free(*head);
return (current);
}
