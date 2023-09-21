#include "monty.h"

/**
 * insert- This one inserts the elements into a stalk
 * @stuck: This is a pointer to a pointer.
 * @Number: Number counter
 * Return: 0 if (success)
 */
void insert(stack_t **stuck, unsigned int Number)
{
	size_t size = 0, i = 0;
	char arg[128] = "";
	char *argument = arg;

	argument = strtok(NULL, " \t\r\n\v\f");

	if (argument == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: usage without error.\n", Number);
		free_t(*stuck);

		exit(EXIT_FAILURE);
	}

	size = strlen(argument);
	for (i = 0; i < size; i++)
		if (!isdigit(argument[i]) && argument[0] != '-')
		{
			dprintf(STDERR_FILENO, "L%u: usage: push integer\n", Number);
			free_t(*stuck);

			exit(EXIT_FAILURE);
		}

	if (queues == 's')
		add_node_at_end(stuck, atoi(argument));

	if (queues == 'q')
		add_at_line(stuck, atoi(argument));
}
