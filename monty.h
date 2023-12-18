#ifndef MONTY_H
#define MONTY_H


#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
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
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;

void f_push(stack_t **head, unsigned int counter); /* push.c */
void f_pop(stack_t **head, unsigned int counter); /* pop.c */
void f_pall(stack_t **head, unsigned int counter); /* pall.c */
void f_div(stack_t **head,unsigned int counter); /* div.c */
void f_string(stack_t **head, unsigned int counter); /* pstr.c */
void f_mod(stack_t **head, unsigned int counter); /* mod.c */
void f_rotate(stack_t **head, __attribute__((unused)) unsigned int counter); /* rotl.c */
void f_add(stack_t **head, unsigned int counter); /* add.c */
int f_execute(char *content, stack_t **head, unsigned int counter, FILE *file); /* execute.c */
void f_char(stack_t **head, unsigned int counter); /* pchar.c */
void f_nop(stack_t **head, unsigned int counter); /* nop.c */
void f_pint(stack_t **head, unsigned int counter); /* pint.c */
int main(int argc, char *argv[]); /* main.c */
void f_swap(stack_t **head, unsigned int counter); /* swap.c */
void f_stack(stack_t **head, unsigned int counter); /* stack.c */
void addqueue(stack_t **head, int n); /* queue.c */
void f_queue(stack_t **head, unsigned int counter); /* queue.c */
void free_stack(stack_t *head); /* free_stack.c */
void addnode(stack_t **head, int i); /* addnode.c */
void f_mul(stack_t **head, unsigned int counter); /* mul.c */
void f_sub(stack_t **head, unsigned int counter); /* sub.c */

#endif /* MONTY_H */
