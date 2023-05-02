#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - prints anything.
 * @head: list head.
 * Return: void.
 */
void free_listint(listint_t *head)
{
listint_t *current = head;
listint_t *prev = current;
while (current != NULL)
{
prev = current;
current = current->next;
free(prev);
}
}
