#include "lists.h"
list_t *add_node_end(list_t **head, const char *str)
{
list_t *ptr;
list_t *temp;
temp = *head;
ptr = malloc(sizeof(list_t));
if (ptr == NULL)
return (NULL);
ptr->str = strdup(str);
if(ptr->str == NULL)
{
free(ptr);
return (NULL);
}
ptr->len = strlen(str);
ptr->next = NULL;
if (*head == NULL)
{
*head = ptr;
return (ptr);
}
else
{
while(temp->next)
{
temp = temp->next;
}
temp->next = ptr;
}
return (ptr);
}
