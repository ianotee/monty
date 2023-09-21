#include "monty.h"

/**
 * print_string - The string on Top.
 * @stuck: Pointer.
 * @Number: The counter.
 *
 * Return: void.
 */
void print_string(stack_h **stuck, unsigned int Number)
{
	int m;
	stack_h *timp = *stuck;

	(void) Number;
	if (*stuck == NULL)
	{
		printf("\n");
		return;
	}

	while (timp != NULL)
	{
		m = timp->m;
		if (!(m >= 1 && m <= 127) || m == 0)
			break;
		printf("%c", m);
		timp = timp->after;
	}
	printf("\n");
}

