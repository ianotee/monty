#include "monty.h"

/**
 *  modulus - It gets the second value.
 * @front: pointer to a pointer.
 * @Number: It counts
 * Return: 0 if (Success)
 */
void modulus(stack_h **front, unsigned int Number)
{
	stack_h *current = *front;
	int nnodes = 1; 

	if (*front == NULL)
	{
		fprintf(stderr, "L%u: can't modulus\n", Number);
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
		fprintf(stderr, "L%d: can't modulus\n", Number);
		free_t(*front);

		exit(EXIT_FAILURE);
	}

	current = *front; 

	if (current->m == 0)
	{
		fprintf(stderr, "L%d: The zero\n", Number);
		exit(EXIT_FAILURE);
	}

	current->after->m = current->after->m % current->m; 

	*front = current->after;
	free(current);
	current->before = NULL;
}
