#include "monty.h"

/**
 * f_pop - removes the top element of the stack
 * @head: The head of the stack
 * @counter: line number of scripts to be printed
*/
void f_pop(stack_t **head, unsigned int counter)
{
stack_t *i;

if (*head == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
i = *head;
*head = i->next;
free(i);
}
