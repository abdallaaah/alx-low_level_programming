#include "lists.h"
/**
 * print_listint - function to print list
 * @h: the head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t num = 0;
while (h != NULL)
{
num++;
printf("%d\n", h->n);
h = h->next;
}
return (num);
}
