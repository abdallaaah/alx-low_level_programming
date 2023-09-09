#include "hash_tables.h"
/**
 * key_index - function gives the index of key
 * @key: key we will work
 * @size: size of the array
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index = 0;
index = hash_djb2(key);
index = index % size;
return (index);
}
