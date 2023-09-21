#include "monty.h"
/**
 * add_at_line - adds a node.
 * @stuck: pointer
 * @argument: argument
 * Return: void.
 */
void add_at_line(stack_t **stuck, int argument)
{
    stack_t *new_node = NULL, *last = NULL;

    new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        dprintf(STDERR_FILENO, "Error: failed\n");
        free_t(*stuck);

        exit(EXIT_FAILURE);
    }

    new_node->n = argument;
    new_node->prev = NULL;
    new_node->next = NULL;

    if (*stuck == NULL)
        *stuck = new;
    else
    {
        last = *stuck;
        while (last->after != NULL)
            last = last->next;
        new_node->next = NULL;
        new_node->prev = last;
        last->next = new_node;
    }
}
