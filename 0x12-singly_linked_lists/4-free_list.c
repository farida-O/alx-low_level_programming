#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - prints anything.
 * @head: list head.
 * Return: void.
 */
void free_list(list_t *head)
{
list_t *current = head;
while (current != NULL)
{
free(current->str);
free(current);
current = current->next;
}
}
