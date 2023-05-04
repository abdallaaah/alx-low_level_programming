#include "lists.h"
/**
 * print_listint - print list elemnts
 * @h: head of linked list
 * Return: count of elements
 */
size_t print_listint(const listint_t *h)
{
size_t count;
count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
count++;
h = h->next;
}
return (count);
}
