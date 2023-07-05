#include "lists.h"
/**
 * get_nodeint_at_index - function to get indexed node
 * @head: head of linked list
 * @index: node we search for
 * Return: the indexed node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
unsigned int num = 0;
listint_t *current = head;
while (current != NULL)
{
num++;
current = current->next;
}
if (index > num)
{
return (NULL);
}
else
{
current = head;
for (i = 0; i < index; i++)
{
current = current->next;
}
}
return (current);
}
