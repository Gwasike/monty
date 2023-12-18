#include "monty.h"
/**
 * f_mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @counter: line number of the script to to be executed
*/
void f_mul(stack_t **head, unsigned int counter)
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
fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
i = *head;
j = i->next->n * i->n;
i->next->n = j;
*head = i->next;
free(i);
}
