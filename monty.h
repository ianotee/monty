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
 * struct stack_s - doubly linked list
 * @n: integer
 * @before: points to the previous element
 * @after: points to the next element
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct options_q - opcode
 * @opcode: opcode
 * @f: function to handle
 * for stack, queues, LIFO, FIFO
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
 * get_code - reads opcode
 * @stuck: double pointer
 * @Number: counter for line number
 * @code: code
 * Return: NULL.
 */
void get_code(stack_t **stuck, unsigned int Number, char *code);
char **code(char *line);
void free_t(stack_t *head);
void add_node_at_end(stack_t **stuck, int argument);
void add_at_line(stack_t **stuck, int argument);

#endif
