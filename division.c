#include "monty.h"

/**
 * division -  This function divides two values
 * @front: This is a poniter to a pointer
 * @ Number: int param
 * Return: 0 if (success)
 */
void division(stack_h **front, unsigned int Number)
{
	stack_h *current = *front;
	int nnodes = 1;

	if (*front == NULL)
	{
		fprintf(stderr, "L%u: This will not divide\n", Number);
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
		fprintf(stderr, "L%d: will not show division\n", Number);
		free_t(*front);

		exit(EXIT_FAILURE);
	}

	current = *front; 

	if (current->m == 0)
	{
		fprintf(stderr, "L%d: can not divide\n", Number);
		exit(EXIT_FAILURE);
	}

	current->after->m = current->after->m / current->m; 

	*front = current->after;
	free(current);
	current->before = NULL;
}
