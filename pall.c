#include "monty.h"

/**
 * paller- It inserts an element into a stack
 * @stuck: The pointer.
 * @Number: The counter.
 *
 * Return: void.
 */
void pall(stack_t **stack, unsigned int  Number)
{
	stack_t *current;

	(void) Number;
	current = *stack;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

