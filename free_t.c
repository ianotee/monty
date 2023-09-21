#include "monty.h"

/**
 * free_t - function that free a list
 * @head: pointer
 * Return: void.
 */
void free_t(stack_h *head)
{
    stack_t *temp;

    while (head != NULL)
    {
        temp = head->next;
        free(head);
        head = temp;
    }
}
