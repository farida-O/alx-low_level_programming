#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - prints anything.
 * @head: list head.
 * @str: string
 * Return: pointer to the new head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *current = *head;
new = malloc(sizeof(list_t));
if (new == NULL)
{
free(new);
return (NULL);
}
new->str = malloc(sizeof(str) + 1);
if (new->str == NULL)
{
free(new->str);
free(new);
return (NULL);
}
new->str = strdup(str);
new->len = strlen(str);
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
