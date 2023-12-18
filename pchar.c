#include "monty.h"

/**
 * f_char - prints the character at the top of the stack
 * @head: The head of the stack
 * @counter: The line number of scripts to be executed
*/
void f_char(stack_t **head, unsigned int counter)
{
stack_t *i;

i = *head;
if (!i)
{
fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
if (i->n > 127 || i->n < 0)
{
fprintf(stderr, "L%d: The value is out of range\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
printf("%c\n", i->n);
}
