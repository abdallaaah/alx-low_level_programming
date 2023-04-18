#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_dog - free dog
 * @d: struct
 * Return: notheing
 */
void free_dog(dog_t *d)
{
if (d == NULL)
{
free(d);
}
}
