#include "lists.h"
/**
 * add_nodeint_end - add node to the end of linked lists
 * @head: head of linked
 * @n: number of ins
 * Return: return pointer to the end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *temp = *head;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (temp->next)
temp = temp->next;
temp->next = new;
return (new);
}
