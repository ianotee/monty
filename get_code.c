#include "monty.h"

/**
 * get_code - reads opcode
 * @stack: double pointer
 * @Number: counter for number
 * @code: opcode
 * Return: void.
 */
void get_code(stack_t **stuck, unsigned int Number, char *code_snip)
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
