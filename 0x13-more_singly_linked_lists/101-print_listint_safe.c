#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a linked list
 * @head: Pointer to head of list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *turtle, *hare;
    size_t count = 0;

    if (!head)
        exit(98);

    turtle = head;
    hare = head;

    while (hare && hare->next)
    {
        printf("[%p] %d\n", (void *)turtle, turtle->n);
        count++;
        turtle = turtle->next;
        hare = hare->next->next;

        if (turtle == hare)
        {
            turtle = head;
            while (turtle != hare)
            {
                printf("[%p] %d\n", (void *)turtle, turtle->n);
                count++;
                turtle = turtle->next;
                hare = hare->next;
            }

            printf("[%p] %d\n", (void *)turtle, turtle->n);
            count++;
            printf("-> [%p] %d\n", (void *)hare, hare->n);
            exit(98);
        }
    }

    printf("[%p] %d\n", (void *)turtle, turtle->n);
    count++;

    return (count);
}
