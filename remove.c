#include "monty.h"

/**
 * remove - It removes an object from a stack.
 * @stuck: Pointer
 * @Number: The counter.
 * Return: 0 if (success)
 */
void pop(stack_h **stuck, unsigned int Number)
{
	stack_h *current;

	if (*stuck == NULL)
	{
		fprintf(stderr, "L%d: This can not Remove\n", Number);
		free_t(*stuck);

		exit(EXIT_FAILURE);
	}

	current = *stuck;
	if ((*stuck)->after)
		(*stuck)->after->before = NULL;
	*stuck = (*stuck)->after;
	free(current);
}

