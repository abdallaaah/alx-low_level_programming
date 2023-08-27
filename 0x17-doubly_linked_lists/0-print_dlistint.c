#include "main.h"
/**
 * print_dlistint - double line list
 * @h: head pointer
 * Return: size of list
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t num = 0;
while (h != NULL)
{
printf("%d\n", h->n);
num++;
h = h->next;
}
return (num);
}
