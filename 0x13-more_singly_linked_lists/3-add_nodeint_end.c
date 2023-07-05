#include "lists.h"
/**
 * add_nodeint_end - function add node at the end of the list
 * @head: head of the linked list
 * @n: integar to add
 * Return: return the node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new = NULL;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
free(new);
return (NULL);
}
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
}
else
{
listint_t  *tail = *head;
while (tail->next != NULL)
{
tail = tail->next;
}
tail->next = new;
}
return (new);
}
