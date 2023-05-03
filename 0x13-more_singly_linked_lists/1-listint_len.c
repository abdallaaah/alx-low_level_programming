#include "lists.h"
/**
 * listint_len - function to count the number of nodes
 * @h: linkedlist
 * Return: number of noders
 */
size_t listint_len(const listint_t *h)
{
size_t count;
count = 0;
while (h)
{
count++;
h = h->next;
}
return (count);
}
