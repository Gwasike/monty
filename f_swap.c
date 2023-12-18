#include "monty.h"

/**
 * f_swap - adds the top two elements of the stack.
 * @head: The head od the stack
 * @counter: line number script to be executed
*/
void f_swap(stack_t **head, unsigned int counter)
{
stack_t *i;
int length = 0, j;

i = *head;
while (i)
{
i = i->next;
length++;
}
if (length < 2)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
i = *head;
j = i->n;
i->n = i->next->n;
i->next->n = j;
}
