#include "lists.h"
/**
 * listint_len - function to count the number of linked list
 * @h: head of linked list
 * Return: return the number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t len = 0;
while (h != NULL)
{
len++;
h = h->next;
}
return (len);
}
