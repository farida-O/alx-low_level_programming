#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees.
 * @head: list head.
 * Return: void.
 */
void free_listint2(listint_t **head)
{
listint_t *current = *head;
listint_t *prev = current;
*head = NULL;
while (current != NULL)
{
prev = current;
current = current->next;
free(prev);
}
}
