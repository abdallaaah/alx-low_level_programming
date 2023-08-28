#include "lists.h"

/**
* delete_dnodeint_at_index - deletes the node at a given index
* @head: pointer to the head of the list
* @index: index of the node to be deleted
* Return: 1 if succeeded, -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
if (*head == NULL) // Empty list
return -1;

dlistint_t *current = *head;
unsigned int i;

if (index == 0) // Delete the first node
{
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return 1;
}

// Iterate to the node at the given index
for (i = 0; i < index && current != NULL; i++)
current = current->next;

if (current == NULL) // Index out of bounds
return -1;

if (current->next != NULL) // Node is not the last node
current->next->prev = current->prev;

if (current->prev != NULL) // Node is not the first node
current->prev->next = current->next;

free(current);
return 1;
}
