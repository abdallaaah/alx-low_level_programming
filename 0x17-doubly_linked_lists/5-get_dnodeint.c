#include "lists.h"
/**
 * get_dnodeint_at_index - function ti return index
 * @head: head of the linked list
 * @index: index will compare
 * Return: return the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
while (head->next != NULL)
{
if (i == index)
{
printf("%d\n", head->n);
break;
}
i++;
head = head->next;
}
return (head);
}
