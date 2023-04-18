#include "dog.h"
/**
 * new_dog - initialize a variable of type struct dog.
 * @name: dog name.
 * @owner: owner.
 * @age: age.
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
d-> name = name;
d-> age = age;
d-> owner = owner;
return (d);
}
