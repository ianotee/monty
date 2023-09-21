#include "monty.h"

/**
 * rotar - It rotate the stack.
 * @stuck: Pointer
 * @Number: The counter.
 * Return: 0 if (success)
 */
void rotar(stack_h **stuck, unsigned int Number)
{
	stack_h *timp, *last;

	(void) Number;
	if (*stuck == NULL || (*stuck)->after == NULL)
		return;

	last = *stuck;
	while (last->after != NULL)
		last = last->after;

	timp = *stuck;
	*stuck = last;
	(*stuck)->before->after = NULL;
	(*stuck)->before = NULL;
	(*stuck)->after = timp;
	timp->before = *stuck;
}

