#include "lists.h"
/**
 * insert_nodeint_at_index - function to add node in spe index
 * @head: head of the linked list
 * @idx: the position
 * @n: the value
 * Return: the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int num = 0;
unsigned int i = 0;
listint_t *new;
listint_t *current = *head;
listint_t *temp = NULL;
while (current != NULL)
{
num++;
current = current->next;
}
if (idx > num)
{
return (NULL);
}
else
{
current = *head;
new = malloc(sizeof(listint_t));
if (new == NULL || head == NULL)
{
free(new);
return (NULL);
}
new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
for (i = 0; i < idx - 1; i++)
{
current = current->next;
}
temp = current;
temp = temp->next;
current->next = new;
new->next = temp;
}
return (new);
}
