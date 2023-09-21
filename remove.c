#include "monty.h"

/**
 * remove - It removes an object from a stack.
 * @stuck: Pointer
 * @Number: The counter.
 * Return: 0 if (success)
 */
void pop(stack_t **stack, unsigned int Number)
{
	stack_t *current;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: This can not Remove\n", Number);
		free_t(*stack);

		exit(EXIT_FAILURE);
	}

	current = *stack;
	if ((*stack)->next)
		(*stack)->next->prev = NULL;
	*stack = (*stack)->next;
	free(current);
}

