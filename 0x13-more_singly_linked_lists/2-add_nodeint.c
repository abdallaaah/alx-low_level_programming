#include "lists.h"
/**
 * add_nodeint - add nore to the beganning of linked list
 * @head: head of linked list
 * @n: integar value of node
 * Return: ptr to the node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ptr;
ptr = malloc(sizeof(listint_t));
if (ptr == NULL)
return (NULL);
ptr->n = n;
ptr->next = *head;
*head = ptr;
return (ptr);
}
