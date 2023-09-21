#include "monty.h"

/**
 *  modulus - It gets the second value.
 * @front: pointer to a pointer.
 * @Number: It counts
 * Return: 0 if (Success)
 */
void modulus(stack_t **front, unsigned int Number)
{
	stack_t *current = *head;
	int nnodes = 1; 

	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't modulus\n", Number);
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
		fprintf(stderr, "L%d: can't modulus\n", Number);
		free_t(*head);

		exit(EXIT_FAILURE);
	}

	current = *head; 

	if (current->n == 0)
	{
		fprintf(stderr, "L%d: The zero\n", Number);
		exit(EXIT_FAILURE);
	}

	current->next->n = current->next->n % current->n; 

	*head = current->next;
	free(current);
	current->prev = NULL;
}
