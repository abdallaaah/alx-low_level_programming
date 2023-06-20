#include "dog.h"
/**
 * print_dog - print dog vars
 * @d: pointer to dog
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
if (d->name == NULL)
{
d->name = "(nil)";
}
if (d->owner == NULL)
{
d->owner = "(nil)";
}
if (d->age == 0)
{
d->age = 0;
}
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
