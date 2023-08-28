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
int flag = 1;
while (head->next != NULL)
{
if (i == index)
{
flag = 0;
break;
}
i++;
head = head->next;
}
if (flag == 1)
return (NULL);
return (head);
}
