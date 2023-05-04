#include "lists.h"
/**
 * add_nodeint_end - add node to the end of linked list
 * @n: the integar value
 * @head: head of pointer
 * Return: return the pointer of the last node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr;
listint_t *current;
current = *head;
ptr = malloc(sizeof(listint_t));
if (ptr == NULL)
return (NULL);
ptr->n = n;
ptr->next = NULL;
if (*head == NULL)
{
*head = ptr;
return (ptr);
}
while (current->next)
{
current = current->next;
}
current->next = ptr;
return (ptr);
}
