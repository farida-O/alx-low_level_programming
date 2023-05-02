#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - prints anything.
 * @head: list head.
 * Return: void.
 */
void free_listint2(listint_t **head)
{
listint_t *prev = *head;
while (*head != NULL)
{
prev = *head;
*head = (*head)->next;
free(prev);
}
*head = NULL;
}
