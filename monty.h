#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
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
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

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
	char *opcode;
	void (*f)(stack_t **stuck, unsigned int Number);
} options_h;

extern char queues;

void addition(stack_t **stuck, unsigned int Number);
void division(stack_t **stuck, unsigned int Number);
void modulus(stack_t **stuck, unsigned int Number);
void multiplication(stack_t **stuck, unsigned int Number);
void nopeller(stack_t **stuck, unsigned int Number);
void paller(stack_t **stuct, unsigned int Number);
void pinting(stack_t **stuck, unsigned int Number);
void remove(stack_t **stuck, unsigned int Number);
void insert(stack_t **stuck, unsigned int Number);
void subtract(stack_t **stuck, unsigned int Number);
void swabing(stack_t **stuck, unsigned int Number);

void print(stack_t **stuck, unsigned int Number);
void print_string(stack_t **stuck, unsigned int Number);
void rotar(stack_t **stuck, unsigned int Number);
void rotar_length(stack_t **stuck, unsigned int Number);

void mount(stack_t **stuck, unsigned int Number);
void line(stack_t **stuck, unsigned int Number);

/**
 * get_opcode - reads opcode and verifies if is valid.
 * @stack: double pointer to header (top) of the stack.
 * @line_number: counter for line number of the file.
 * @code: code to operate.
 *
 * Return: void.
 */
void get_code(stack_t **stuck, unsigned int Number, char *code);
char **code(char *line);
void free_t(stack_t *head);
void add_node_at_end(stack_t **stuck, int argument);
void add_at_line(stack_t **stuck, int argument);

#endif
