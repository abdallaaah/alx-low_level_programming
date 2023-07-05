#include "lists.h"
/**
 * free_listint - free the list
 * @head: head of linked list
 * Return: void no return
 */
void free_listint(listint_t *head)
{
listint_t *current = head;
listint_t *temp = NULL;

while (current != NULL)
{
temp = current;
current = current->next;
free(temp);
}
}
