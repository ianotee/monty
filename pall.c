#include "monty.h"

/**
 * paller- It inserts an element into a stack
 * @stuck: The pointer.
 * @Number: The counter.
 *
 * Return: void.
 */
void pall(stack_h **stuck, unsigned int  Number)
{
	stack_h *current;

	(void) Number;
	current = *stuck;
	while (current != NULL)
	{
		printf("%d\n", current->m);
		current = current->after;
	}
}

