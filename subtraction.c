#include "monty.h"

/**
 * subtraction -  Removes objects from stack.
 * @front: Pointer.
 * @line_number: The counter.
 * Return: 0 if(success)
 */
void subtraction(stack_h **front, unsigned int Number)
{
	stack_h *current = *front;
	int nnodes = 1; 

	if (*front == NULL)
	{
		fprintf(stderr, "L%u: This can \n", Number);
		free_t(*front);

		exit(EXIT_FAILURE);
	}

	while (current->after != NULL)
	{
		current = current->after;
		nnodes++;
	}

	if (nnodes + 1 <= 2)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", Number);
		exit(EXIT_FAILURE);
	}

	current = *front; 

	current->after->m = current->after->m - current->m;

	*front = current->after;
	free(current);
	current->before = NULL;
}

