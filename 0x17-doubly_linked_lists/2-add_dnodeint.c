#include "lists.h"
/**
 * add_dnodeint - add point in front
 * @head: head of the linked list
 * @n: the data
 * Return: the new node on begginning
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
if (head != NULL)
{
new->n = n;
new->next = *head;
new->prev = NULL;
*head = new;
}
/*else
{
new->n = n;
new->next = NULL;
new->prev = NULL;
*head = new;
}*/
if (head)
return (*head);
else
return (NULL);
}
