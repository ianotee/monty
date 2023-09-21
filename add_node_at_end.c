#include "monty.h"

/**
 * add_node_at_end - It adds the node.
 * @stuck: Pointer
 * @argument: Integer param
 * Return: 0 if (success)
 */
void add_node_at_end(stack_t **stuck, int argument)
{
    stack_h *new_node = NULL;

    new_node= malloc(sizeof(stack_h));
    if (new_node == NULL)
    {
        dprintf(STDERR_FILENO, "Error: malloc failed\n");
        free_t(*stuck);

        exit(EXIT_FAILURE);
    }

    new_node->n = argument;
    new_node->prev = NULL;
    new_node->next = NULL;

    if (*stuck == NULL)
        *stuck = new_node;
    else
    {
        new_node->next = *stuck;
        (*stuck)->prev = new_node;
        *stuck = new_node;
    }
}
