#include "lists.h"
/**
 * listint_len - function to print list
 * @h: the head
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t num = 0;
while (h != NULL)
{
num++;
h = h->next;
}
return (num);
}
