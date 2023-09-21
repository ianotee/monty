#include "monty.h"

/**
 * swabing -  Changes the objects
 * @stuck: This is a pointer.
 * @Number: The counter
 * Return: 0 if (success)
 */
void swabing(stack_h **stuck, unsigned int  Number)
{
	stack_h *timp;

	if (!stuck || !*stuck || !((*stuck)->after))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", Number);
		free_t(*stuck);

		exit(EXIT_FAILURE);
	}

	timp = *stuck;
	*stuck = (*stuck)->after;
	(*stuck)->before = NULL;
	if ((*stuck)->after)
		((*stuck)->after)->before = timp;
	timp->after = (*stuck)->after;
	(*stuck)->after = timp;
	timp->before = *stuck;
}

