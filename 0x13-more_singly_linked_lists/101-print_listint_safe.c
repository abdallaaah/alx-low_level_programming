#include "lists.h"
#include <stdio.h>
#include <stdint.h>
/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 *
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
    const listint_t *tortoise = head, *hare = head;
    size_t nodes = 0;

    if (head == NULL || head->next == NULL)
        return (nodes);

    while (hare && hare->next)
    {
        tortoise = tortoise->next;
        hare = hare->next->next;
        if (tortoise == hare)
            break;
    }

    if (hare == NULL || hare->next == NULL)
        return (nodes);

    nodes++;
    tortoise = tortoise->next;
    while (tortoise != hare)
    {
        nodes++;
        tortoise = tortoise->next;
    }

    return (nodes);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 *
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t nodes = 0;

    if (head == NULL)
        return (nodes);

    nodes = looped_listint_len(head);

    printf("Linked List:\n");
    while (head && nodes--)
    {
        printf("[%p] %d\n", (void *)head, head->n);
        head = head->next;
    }
    if (nodes == SIZE_MAX)
        printf("Infinite loop detected!\n");

    return (nodes);
}

