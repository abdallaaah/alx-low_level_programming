#include "lists.h"

/**
 * print_listint - values of a linked list
 * @h: linked list of type sturct listint_t to print
 * Return: number of noders
 */
size_t print_listint(const listint_t *h)
{
size_t count;
count = 0;
while (h)
{
printf("%d\n", h->n);
count++;
h = h->next;
}
return (count);
}
