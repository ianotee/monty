#include "main.h"
/**
 * add_at_line - adds a node.
 * @stuck: pointer
 * @argument: argument
 * Return: void.
 */
void add_at_line(stack_h **stuck, int argument)
{
    stack_h *new = NULL, *last = NULL;

    new = malloc(sizeof(stack_h));
    if (new == NULL)
    {
        dprintf(STDERR_FILENO, "Error: failed\n");
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
        last = *stuck;
        while (last->after != NULL)
            last = last->after;
        new->after = NULL;
        new->before = last;
        last->after = new;
    }
}
