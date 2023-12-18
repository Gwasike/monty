#include "monty.h"

/**
 * pall - prints the elements of the stack
 * @head: pointer to the pointer to the head of the string
 * @counter: number of lines
 * Return: void
*/
void f_pall(stack_t **head, unsigned int counter)
{
stack_t *i;
(void)counter;

i = *head;
if (i == NULL)
{
return;
}

while (i)
{
printf("%d\n", i->n);
i = i->next;
}

}
