#include "lists.h"
/**
 * free_listint2 - list integar function
 * @head: head of linkedlist
 * Return: void no return
 */
void free_listint2(listint_t **head)
{
listint_t *current = *head;
listint_t *temp = NULL;
while (current != NULL)
{
temp = current;
current = current->next;
free(temp);
}
*head = NULL;
}
