#include "lists.h"
/**
 * free_list - free linked list
 * @head: head of linked list
 * Return: void
 */
void free_list(list_t *head)
{
list_t *current = head;
list_t *temp = NULL;
while (current != NULL)
{
temp = current;
current = current->next;
free(temp->str);
free(temp);
}
}
