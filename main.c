#include "main.h"

char stack_queue = 's';

/**
 * main -The main block function.
 * @argument_counter: This is the argument counter.
 * @argument_vector:This is the argument vector
 * Return:0 if (success)
 */
int main(int argument_counter, char *argument_vector[])
{
	FILE *navigator = NULL;
	size_t size = 0;
	unsigned int Number = 1;
	char *line_u = NULL;
	char *code_snip = NULL;
	stack_h *stuck = NULL;

	if (argument_counter != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: main file\n");
		exit(EXIT_FAILURE);
	}

	navigator = fopen(argument_vector[1], "r");
	if (navigator == NULL)
	{
		dprintf(STDERR_FILENO, "Error: It can not open the File %s\n", argument_vector[1]);
		exit(EXIT_FAILURE);
	}

	while (getline(&line_u, &size, navigator) != -1)
	{
		code_snip = strtok(line_u, " \t\r\n\v\f");
		if (code_snip != NULL && code_snip[0] != '#')
			get_code(&stuck, Number, code_snip);
		Number++;
	}

	free_t(stuck);
	stuck = NULL;
	free(line_u);
	fclose(navigator);
	exit(EXIT_SUCCESS);
}
