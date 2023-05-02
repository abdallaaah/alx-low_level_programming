#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
size_t print_list(const list_t *h)
{
size_t num;
num = 0;
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
num++;
while (h->next != NULL)
{
num++;
h = h->next;
if (h->str != NULL)
{
printf("[%u] %s\n", h->len, h->str);
}
}
return (num);
}
