#include "lists.h"
/**
 * insert_dnodeint_at_index - index
 * @h: head
 * @idx: index of 
 * @n: the value of n
 * Return: the node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temp = *h;
dlistint_t *new;
dlistint_t *temp2 = *h;
unsigned int num = 0;
unsigned int i = 0;
while (temp)
{
num++;
temp = temp->next;
}
if (idx > num)
return (NULL);
temp = *h;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0 || *h == NULL)
{
new->prev = NULL;
new->next = *h;
if (*h)
(*h)->prev = new;
*h = new;
}
else
{
while (temp)
{
if (i == idx)
{
temp = temp->prev;
temp->next = new;
new->prev = temp;
new->next = temp2;
temp2->prev = new;
break;
}
i++;
temp = temp->next;
temp2 = temp2->next;
}
}
return (new);
}
