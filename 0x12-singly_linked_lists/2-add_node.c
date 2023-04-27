#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - prints anything.
 * @head: list head.
 * @str: string
 * Return: pointer to the new head.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *current;
current = malloc(sizeof(list_t));
if (current == NULL)
{
return (NULL);
}
current->str = malloc(strlen(str) + 1);
if (current->str == NULL)
{
return (NULL);
}
current->str = strdup(str);
current->next = *head;
return (current);
}
