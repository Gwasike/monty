#include "monty.h"

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

struct Global {
    char *argument;
    int data_struct;
};

struct Global global;

/**
 * push - push element into the stack
 * @head: stack given by main
 * @line_cnt: amount of lines
 *
 * Return: void
 */
void push(stack_t **head, unsigned int counter)
{
char *n = global.argument;

if ((is_digit(n)) == 0)
{
fprintf(stderr, "L%d: usage: push integer\n", counter);
exit(EXIT_FAILURE);
}

if (global.data_struct == 1)
{
if (!add_node(head, atoi(global.argument)))
{
exit(EXIT_FAILURE);
}
}
else
{
if (!queue_node(head, atoi(global.argument)))
{
exit(EXIT_FAILURE);
}
}
}
