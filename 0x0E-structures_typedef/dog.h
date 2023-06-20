#ifndef DOG_H
#define DOG_H
#include <string.h>
#include <stdio.h>
/**
 * struct dog - structure represent a dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
char *name;
float age;
char *owner;
};

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
