#include "lists.h"
/**
 * sum_dlistint - sum the list var
 * @head: ehad of the list
 * Return: return the sum
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
if (head == NULL)
return (0);
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
