#include "monty.h"

void f_mod(stack_t **head, unsigned int counter)
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
fprintf(stderr, "L%d: Can't do mod, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
i = *head;

if (i->n == 0)
{
fprintf(stderr, "L%d: Division by zero\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
j = i->next->n / i->n;
i->next->n = j;
*head = i->next;
free(i);


}
