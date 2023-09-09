#include "hash_tables.h"
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index = 0;
hash_node_t *current_item;
if (ht == NULL || key == NULL)
{
return (NULL);
}
index = hash_djb2((unsigned char *)key) % ht->size;
current_item = ht->array[index];
while (current_item != NULL)
{
if (strcmp(current_item->key, key) == 0)
{
return (current_item->value);
}
current_item = current_item->next;
}
return (NULL);
}
