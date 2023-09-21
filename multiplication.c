
#include "main.h"

/**
 * multiplication -  This function multiply values.
 * @front: Pointer
 * @Number: Counter.
 * Return: 0 if (success)
 */
void multiplication(stack_h **front, unsigned int Number)
{
	stack_h *current = *front;

	int nnodes = 1; 

	if (*front == NULL)
	{
		fprintf(stderr, "L%u: can't  multiplaction\n",Number);
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
		fprintf(stderr, "L%u: can't multiplication\n", Number);
		free_t(*front);

		exit(EXIT_FAILURE);
	}

	current = *front; 

	current->after->m = current->after->m* current->m;

	*front = current->after;
	free(current);
	current->before = NULL;

}

