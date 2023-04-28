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
list_t *prev = current;
while (current != NULL)
{
prev = current;
current = current->next;
free(prev->str);
free(prev);
}
}
