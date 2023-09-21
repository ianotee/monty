#include "main.h"

/**
 * pinting - Prints the value.
 * @stuck: Pointer.
 * @Number: The counter.
 * Return: 0 if (success)
 */
void pinting(stack_h **stuck, unsigned int Number)
{
	stack_h *current = *stuck;

	if (*stuck == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: This cant load\n", Number);
		free_t(*stuck);

		exit(EXIT_FAILURE);
	}

	printf("%d\n", current->m);
}

