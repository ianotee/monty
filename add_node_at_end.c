#include "main.h"

/**
 * add_node_at_end - It adds the node.
 * @stuck: Pointer
 * @argument: Integer param
 * Return: 0 if (success)
 */
void add_node_at_end(stack_h **stuck, int argument)
{
    stack_h *new = NULL;

    new = malloc(sizeof(stack_h));
    if (new == NULL)
    {
        dprintf(STDERR_FILENO, "Error: malloc failed\n");
        free_t(*stuck);

        exit(EXIT_FAILURE);
    }

    new->m = argument;
    new->before = NULL;
    new->after = NULL;

    if (*stuck == NULL)
        *stuck = new;
    else
    {
        new->after = *stuck;
        (*stuck)->before = new;
        *stuck = new;
    }
}
