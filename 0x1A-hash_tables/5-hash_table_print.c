#include "hash_tables.h"
/**
 * hash_table_print - print hash tables
 * @ht: the table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i = 0;
int first_pair = 1;
hash_node_t *current_item;
if (ht == NULL)
{
printf("{}");
return;
}
printf("{");
for (i = 0; i < ht->size; i++)
{
current_item = ht->array[i];
while (current_item != NULL)
{
if (first_pair == 0)
{
printf(", ");
}
printf("'%s' : '%s'", current_item->key, current_item->value);
first_pair = 0;
current_item = current_item->next;
}
}
printf("}\n");
}
