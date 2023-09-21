#include "monty.h"

/**
 * rotar_length - It rotates the stack.
 * @stuck: The pointer.
 * @Number: The counter.
 * Return: 0 if (success)
 */
void rotar_length(stack_h **stuck, unsigned int Number)
{
	stack_h *timp, *last;

	(void) Number;
	if (*stuck == NULL || (*stuck)->after == NULL)
		return;

	last = *stuck;
	while (last->after != NULL)
		last = last->after;

	timp = *stuck;
	*stuck = (*stuck)->after;
	(*stuck)->before = NULL;
	timp->after = NULL;
	timp->before = last;
	last->after = timp;

}

