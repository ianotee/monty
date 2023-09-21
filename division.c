#include "monty.h"

/**
 * division -  This function divides two values
 * @front: This is a poniter to a pointer
 * @ Number: int param
 * Return: 0 if (success)
 */
void division(stack_h **front, unsigned int Number)
{
	stack_t *current = *head;
	int nnodes = 1;

	if (*head == NULL)
	{
		fprintf(stderr, "L%u: This will not divide\n", Number);
		free_t(*head);

		exit(EXIT_FAILURE);
	}

	while (current->next != NULL)
	{
		current = current->next;
		nnodes++;
	}

	if (nnodes + 1 <= 2)
	{
		fprintf(stderr, "L%d: will not show division\n", Number);
		free_t(*front);

		exit(EXIT_FAILURE);
	}

	current = *head; 

	if (current->n == 0)
	{
		fprintf(stderr, "L%d: can not divide\n", Number);
		exit(EXIT_FAILURE);
	}

	current->next->n = current->next->n / current->n; 

	*head = current->next;
	free(current);
	current->prev = NULL;
}
