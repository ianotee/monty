#include "monty.h"

/**
 * addition - The addition of two values
 * @stuck: Pointer to a pointer.
 * @ Number: counter for line number of the file.
 * Return: 0 if success
 */
void addition(stack_h **stuck, unsigned int Number)
{
	stack_h *timp;

	if (!stuck || !*stuck || !((*stuck)->after))
	{
		fprintf(stderr, "L%d: will not add\n", Number);
		free_t(*stuck);

		exit(EXIT_FAILURE);
	}

	timp = *stuck;
	*stuck = (*stuck)->after;
	(*stuck)->m += timp->m;
	(*stuck)->before = NULL;
	free(timp);
}
