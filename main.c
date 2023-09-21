#include "monty.h"

char stack_queue = 's';

/**
 * main - Entry point
 * @argc: number of arguments passed as parameter to main program.
 * @argv: array of strings with the parameters passed to main program
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on any failure.
 */
int main(int argc, char *argv[])
{
	FILE *stream = NULL;
	size_t len = 0;
	unsigned int line_number = 1;
	char *line = NULL;
	char *code = NULL;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	stream = fopen(argv[1], "r");
	if (stream == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (getline(&line, &len, stream) != -1)
	{
		code = strtok(line, " \t\r\n\v\f");
		if (code != NULL && code[0] != '#')
			get_opcode(&stack, line_number, code);
		line_number++;
	}

	free_stack_t(stack);
	stack = NULL;
	free(line);
	fclose(stream);
	exit(EXIT_SUCCESS);

}	
