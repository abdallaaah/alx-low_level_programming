#include "hash_tables.h"
/**
 * create - create the node
 * @key: key of the hash
 * @value: value of tha hash
 * Return: the new node
 */
hash_node_t *create(const char *key, const char *value)
{
hash_node_t *node;
node = malloc(sizeof(hash_node_t));
if (node == NULL)
{
return (NULL);
}
node->key = (char *)malloc(strlen(key) + 1);
if (node->key == NULL)
{
free(node);
return (NULL);
}
node->value = (char *)malloc(strlen(value) + 1);
if (node->value == NULL)
{
free(node->key);
free(node);
return (NULL);
}
strcpy(node->key, key);
strcpy(node->value, value);
node->next = NULL;
return (node);
}

/**
 * hash_table_set - insert new node
 * @ht: hash table
 * @key: key of the hash
 * @value: value of the hash
 * Return: void
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index = 0;
hash_node_t *current_item;
hash_node_t *node = create(key, value);
if (node == NULL)
{
return (0);
}
index = hash_djb2((unsigned char *)key) % ht->size;
current_item = ht->array[index];
while (current_item != NULL)
{
if (strcmp(current_item->key, key) == 0)
{
free(node->key);
free(node->value);
free(node);
return (0);
}
current_item = current_item->next;
}
node->next = ht->array[index];
ht->array[index] = node;
return (1);
}
