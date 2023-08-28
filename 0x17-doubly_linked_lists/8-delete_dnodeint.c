#include "lists.h"

/**
* delete_dnodeint_at_index - deletes the node at a given index
* @head: pointer to the head of the list
* @index: index of the node to be deleted
* Return: 1 if succeeded, -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current;
unsigned int i;
current = *head;
if (*head == NULL)
return -1;
if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return 1;
}
for (i = 0; i < index && current != NULL; i++)
current = current->next;
if (current == NULL)
return -1;
if (current->next != NULL)
current->next->prev = current->prev;
if (current->prev != NULL)
current->prev->next = current->next;
free(current);
return 1;
}
