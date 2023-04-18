#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
void free_dog(dog_t *d)
{
if (d == NULL)
{
free(d);
}
}
