#include "hash_tables.h"
#include <stdio.h>
#define MAX_SIZE 100
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i = 0;
hash_table_t *table;
table = malloc(sizeof(hash_table_t) * 1);
if (table == NULL)
{
return (NULL);
}
table->size = size;
table->array = malloc(sizeof(hash_node_t) * size);
if (table->array == NULL)
{
free(table);
return (NULL);
}
for (i = 0; i < size; i++)
{
table->array[i] = NULL;
}
return (table);
}
