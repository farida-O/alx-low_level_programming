#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Represents a dog with a name, its owner and age.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: dog owner.
 */
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
