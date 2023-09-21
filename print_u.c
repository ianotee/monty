#include "main.h"

/**
 * print - It prints the character
 * @stuck: Pointer to a pointer.
 * @Number: The counter.
 * Return: 0 if (success)
 */
void print(stack_h **stuck, unsigned int Number)
{
	int m;

	if (*stuck == NULL)
	{
		fprintf(stderr, "L%d: can't  load print\n", Number);
		free_t(*stuck);

		exit(EXIT_FAILURE);
	}

	m= (*stuck)->m;
	if (m >= 32 && m <= 127)
		printf("%c\n", m);
	else
	{
		fprintf(stderr, "L%d: can't print\n", Number);
		free_t(*stuck);

		exit(EXIT_FAILURE);
	}

}

