#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dog - print dog information
 * @d: struct of the dog
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d->name == NULL)
{
printf("Name: (nil)");
}
if (d == NULL)
{
return;
}
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
