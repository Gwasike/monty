#include "monty.h"

void f_add(stack_t **head, unsigned int counter)
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
fprintf(stderr, "L%d: Can't perfom addition\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
i = *head;
j = i->n + i->next->n;
i->next->n = j;
*head = i->next;
free(i);

}
