#include "lists.h"
/**
 * dlistint_len - double line list
 * @h: head pointer
 * Return: size of list
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t num = 0;
while (h != NULL)
{
num++;
h = h->next;
}
return (num);
}
