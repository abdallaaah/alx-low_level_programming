#include "dog.h"
/**
 * init_dog - function initailze the dog
 * @d: pointer to the dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner name
 * Retrun: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
