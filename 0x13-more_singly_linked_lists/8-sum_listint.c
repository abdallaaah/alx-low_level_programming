#include "lists.h"
int sum_listint(listint_t *head)
{
int sum;
listint_t *ptr;
ptr = head;
sum = 0;
while (ptr)
{
sum += ptr->n;
ptr = ptr->next;
}
return (sum);
}
