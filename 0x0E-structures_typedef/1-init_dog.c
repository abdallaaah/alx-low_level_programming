#include "dog.h"
#include <stddef.h>
/**
 * init_dog - dog description
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * @d: structue of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
