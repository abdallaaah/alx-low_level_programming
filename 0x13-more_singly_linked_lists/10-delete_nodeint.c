#include "lists.h"
/**
 * delete_nodeint_at_index - delet index in specific node
 * @head: head of linked
 * @index: index of deleted
 * Return: 1 on success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current = *head;
listint_t *temp = NULL;
listint_t *temp2 = NULL;
listint_t *tempzero = NULL;
unsigned int num = 0;
unsigned int i = 0;
while (current != NULL)
{
num++;
current = current->next;
}
if (index > num)
return (-1);
if (index == 0)
{
tempzero = *head;
*head = (*head)->next;
free(tempzero);
return (1);
}
else
{
current = *head;
for (i = 0; i < index - 1; i++)
{
current = current->next;
}
temp = current;
temp2 = current;
temp2 = temp2->next;
current = current->next;
current = current->next;
temp->next = current;
free(temp2);
return (1);
}
}
