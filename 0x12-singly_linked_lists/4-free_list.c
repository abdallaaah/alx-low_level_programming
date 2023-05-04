#include "lists.h"
/**
 * free_list - function to free linked list
 * @head: the head of linked list
 * Return: void
 */
void free_list(list_t *head)
{
list_t *current;
while (head != NULL)
{
current = head;
head = head->next;
free(current->str);
free(current);
}
}
