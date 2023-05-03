#include "lists.h"
/**
 * add_nodeint - add node to the start
 * @head: head of list
 * @n: n of func
 * Return: pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ptr;
ptr = malloc(sizeof(listint_t));
if (ptr == NULL)
{
return (NULL);
}
ptr->n = n;
ptr->next = *head;
*head = ptr;
return (ptr);
}
