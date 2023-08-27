#include "lists.h"
/**
 * free_dlistint - free the list of in
 * @head: heasd of the dlinked list
 * Return: void no return
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp = head;
if (head == NULL)
{
return;
}
while (head->next != NULL)
{
temp = head;
head = head->next;
free(temp);
}
free(head);
}
