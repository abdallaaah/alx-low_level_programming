#include "lists.h"
list_t *add_node(list_t **head, const char *str)
{
list_t *ptr;
ptr = malloc(sizeof(list_t));
if (ptr == NULL)
{
return (NULL);
}
ptr->str = strdup(str);
if (ptr->str == NULL)
{
free(ptr);
return (NULL);
}
ptr->len = strlen(str);
ptr->next = *head;
*head = ptr;
return (ptr);
}
