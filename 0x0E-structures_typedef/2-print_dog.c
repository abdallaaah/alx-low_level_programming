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
printf("Name: (nil)");
}
if (d->owner == NULL)
{
printf("owner: (nil)");
}
if (d->age == 0)
{
printf("age: (nil)");
}
printf("%s\n", d->name);
printf("%f\n", d->age);
printf("%s\n", d->owner);
}
