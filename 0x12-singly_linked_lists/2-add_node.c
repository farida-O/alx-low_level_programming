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
current->str = malloc(sizeof(str));
current->str = strdup(str);
current->next = *head;
return (current);
}
