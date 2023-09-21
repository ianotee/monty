#include "monty.h"

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
        {"pall", pall},
        {"pint", pinting},
        {"pop", pop},
        {"push", push},
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
