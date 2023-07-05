#include "lists.h"
/**
 * sum_listint - sum the integar list
 * @head: head of the linked list
 * Return: the sumtion
 */
int sum_listint(listint_t *head)
{
listint_t *current = head;
int sum = 0;
while (current != NULL)
{
sum += current->n;
current = current->next;
}
return (sum);
}
