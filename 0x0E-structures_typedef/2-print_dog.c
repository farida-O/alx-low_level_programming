#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print the struct dog variables.
 * @d: a pointer to struct.
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
(d->name != NULL) ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
(d->age != 0) ? printf("Age: %f\n", d->age) : printf("Age: (nil)\n");
(d->owner != NULL) ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)\n");
}
