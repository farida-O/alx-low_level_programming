#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize a variable of type struct dog.
 * @d: a pointer to struct.
 * Return: void
 */
void print_dog(struct dog *d)
{
(d-> name) ? printf("Name: %s\n", d-> name) : printf("Name: (nil)");
(d-> age) ? printf("Age: %f\n", d-> age) : printf("Age: (nil)");
(d-> owner) ? printf("Owner: %s\n", d-> owner) : printf("Owner: (nil)");
}
