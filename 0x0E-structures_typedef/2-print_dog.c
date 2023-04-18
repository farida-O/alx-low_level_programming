#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print the struct dog variables.
 * @d: a pointer to struct.
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
(d->name != NULL) ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
printf("Age: %f\n", d->age);
if (d->owner != NULL)
{
printf("Owner: %s\n", d->owner);
}
else
{
printf("Owner: (nil)\n");
}
}
}
