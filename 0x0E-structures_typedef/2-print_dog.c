#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print the struct dog variables.
 * @d: a pointer to struct.
 * Return: void
 */
void print_dog(struct dog *d)
{
(d-> name) ? printf("Name: %s\n", d-> name) : printf("Name: (nil)\n");
(d-> age) ? printf("Age: %f\n", d-> age) : printf("Age: (nil)\n");
(d-> owner) ? printf("Owner: %s\n", d-> owner) : printf("Owner: (nil)\n");
}
