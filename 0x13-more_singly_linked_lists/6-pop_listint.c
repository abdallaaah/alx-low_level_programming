#include "lists.h"
/**
 * pop_listint - pop the head
 * @head: head of the linked list
 * Return: return nil
 */
int pop_listint(listint_t **head)
{
int data = 0;
listint_t *current = *head;
if (*head == NULL)
{
return (0);
}
*head = (*head)->next;
data = current->n;
free(current);
return (data);
}
