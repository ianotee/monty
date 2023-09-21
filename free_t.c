#include "monty.h"

/**
 * free_stack_t - function that free a list of type dlistint_t
 * @head: pointer to a list type stack_t
 *
 * Return: void.
 */
void free_t(stack_h *front)
{
    stack_h *timp;

    while (front != NULL)
    {
        timp = front->after;
        free(front);
        front = timp;
    }
}
