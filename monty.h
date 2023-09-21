#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stock_f
{
	int m;
	struct stock_f *before;
	struct stock_f *after;
} stack_h;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct options_q
{
	char *t_code;
	void (*f)(stack_h **stuck, unsigned int Number);
} options_h;

extern char queues;

void addition(stack_h **stuck, unsigned int Number);
void division(stack_h **stuck, unsigned int Number);
void modulus(stack_h **stuck, unsigned int Number);
void multiplication(stack_h **stuck, unsigned int Number);
void nopeller(stack_h **stuck, unsigned int Number);
void paller(stack_h **stuck, unsigned int Number);
void pinting(stack_h **stuck, unsigned int Number);
void remove(stack_h **stuck, unsigned int Number);
void insert(stack_h **stuck, unsigned int Number);
void subtract(stack_h **stuck, unsigned int Number);
void swabing(stack_h **stuck, unsigned int Number);

void print(stack_h **stuck, unsigned int Number);
void print_string(stack_h **stuck, unsigned int Number);
void rotar(stack_h **stuck, unsigned int Number);
void rotar_length(stack_h **stuck, unsigned int Number);

void mount(stack_h **stuck, unsigned int Number);
void line(stack_h **stuck, unsigned int Number);

/**
 * get_opcode - reads opcode and verifies if is valid.
 * @stack: double pointer to header (top) of the stack.
 * @line_number: counter for line number of the file.
 * @code: code to operate.
 *
 * Return: void.
 */
void get_code(stack_h **stuck, unsigned int Number, char *code);
char **code(char *line);
void free_t(stack_h *head);
void add_node_at_end(stack_h **stuck, int argument);
void add_at_line(stack_h **stuck, int argument);

#endif
