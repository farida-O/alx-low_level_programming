#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog.
 * @d: a pointer to struct.
 * Return: void
 */
void print_dog(struct dog *d)
{
!(d-> name) ? printf("Name: %s", d-> name) : printf("Name: (nil)");
!(d-> age) ? printf("Age: %f", d-> age) : printf("Name: (nil)");
!(d-> owner) ? printf("Owner: %s", d-> owner) : printf("Name: (nil)");
}
