#include "monty.h"

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

/**
 * get_opcode - reads opcode and verifies if is valid.
 * @stack: double pointer to header (top) of the stack.
 * @line_number: counter for line number of the file.
 * @code: opcode to excecute.
 *
 * Return: void.
 */
void get_code(stack_h **stuck, unsigned int Number, char *code_snip)
{
    int i = 0;
    options_h code_function[] = {
        {"add", addition},
        {"div", division},
        {"mod", modulus},
        {"mul", multiplication},
        {"nop", nopeller},
        {"pall", paller},
        {"pint", pinting},
        {"pop", remove},
        {"push", insert},
        {"sub", subtract},
        {"swap", swabing},
        {"pchar", print},
        {"pstr", print_string},
        {"rotr", rotar},
        {"rotl", rotar_length},
        {"stack", mount},
        {"queue", line},
        {NULL, NULL}};

    while (code_function[i].t_code)
    {
        if (strcmp(code_function[i].t_code, code_snip) == 0)
        {
            code_function[i].f(stuck, Number);
            return;
        }
        i++;
    }
    dprintf(STDERR_FILENO, "L%u: This is not known.%s\n", Number, code_snip);
    free_t(*stuck);

    exit(EXIT_FAILURE);
}

/**
 * free_stack_t - function that free a list of type dlistint_t
 * @head: pointer to a list type stack_t
 *
 * Return: void.
 */
void free_t(stack_h *front)
{
    stack_h *timp;

    while (front != NULL)
    {
        timp = front->after;
        free(front);
        front = timp;
    }
}
