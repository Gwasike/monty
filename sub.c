#include "monty.h"
/**
  *f_sub - subtracts the top element of the stack from the second top element
  *@head: The head of the stack
  *@counter: line number of script to be executed
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *j;
	int sub, nodes;

	j = *head;
	for (nodes = 0; j != NULL; nodes++)
		j = j->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	j = *head;
	sub = j->next->n - j->n;
	j->next->n = sub;
	*head = j->next;
	free(j);
}
