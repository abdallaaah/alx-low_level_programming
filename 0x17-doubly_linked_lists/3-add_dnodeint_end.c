#include "lists.h"
/**
 * add_dnodeint_end - function to add node at end
 * @head: head of the linked list
 * @n: the value
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *temp = *head;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (new);
}

while (temp->next != NULL)
{
temp = temp->next;
}

new->prev = temp;
temp->next = new;

return (new);
}
