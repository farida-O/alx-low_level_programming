#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - initialize a variable of type struct dog.
 * @name: dog name.
 * @owner: owner.
 * @age: age.
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d = malloc(sizeof(dog_t));
if (d == NULL)
{
free(d);
return (NULL);
}
d->name = malloc(sizeof(name) + 1);
if (d->name == NULL)
{
free(d->name);
free(d);
return (NULL);
}
strcpy(d->name, name);
d->age = age;
d->owner = malloc(sizeof(owner) + 1);
if (d->owner == NULL)
{
free(d->name);
free(d->owner);
free(d);
return (NULL);
}
strcpy(d->owner, owner);
return (d);
}
