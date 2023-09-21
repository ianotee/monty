#include "monty.h"

/**
 * addition - The addition of two values
 * @stuck: Pointer to a pointer.
 * @ Number: counter for line number of the file.
 * Return: 0 if success
 */
void addition(stack_t **stuck, unsigned int Number)
{
	stack_t *temp;

	if (!stuck || !*stuck || !((*stuck)->next))
	{
		fprintf(stderr, "L%d: will not add\n", Number);
		free_stack_t(*stuck);

		exit(EXIT_FAILURE);
	}

	temp = *stuck;
	*stuck = (*stuck)->next;
	(*stuck)->n += temp->n;
	(*stuck)->prev = NULL;
	free(temp);
}
