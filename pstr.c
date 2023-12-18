#include "monty.h"

/**
 * f_string - prints the string starting at the top of the stack
 * @head: The head of the stack
 * @counter: the number of lines
*/
void f_string(stack_t **head, unsigned int counter)
{
stack_t *i;
(void)counter;

i = *head;
while (i)
{
if (i->n > 127 || i->n <= 0)
{
break;
}
printf("%c", i->n);
i = i->next;

}
printf("\n");
}
