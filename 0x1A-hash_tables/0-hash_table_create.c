#include "hash_tables.h"
/**
 * hash_table_create - function to create table
 * @size: size of the table any array
 * Return: new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i = 0;
hash_table_t *table = NULL;
table = malloc(sizeof(hash_table_t));
if (table == NULL)
{
return (NULL);
}
table->array = malloc(sizeof(hash_node_t *) * size);
if (table->array == NULL)
{
return (NULL);
}
table->size = size;
for (i = 0; i < size; i++)
{
table->array[i] = NULL;
}
return (table);
}
